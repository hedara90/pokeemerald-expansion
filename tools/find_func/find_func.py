import subprocess
import os
import sys

numArgs = len(sys.argv)

if not numArgs == 3:
    print("Command requires passing 2 arguments, a .elf file and an address")
    quit()

if not os.path.exists(sys.argv[1]):
    errorStr = "Input file (" + str(sys.argv[1]) + ") doesn't exist"
    print(errorStr)
    quit()

with open(str(sys.argv[1]), 'rb') as file:
    matches = True
    if not file.read(1) == b'\x7f':
        matches = False
    if not file.read(1) == b'E':
        matches = False
    if not file.read(1) == b'L':
        matches = False
    if not file.read(1) == b'F':
        matches = False

    if not matches:
        errorStr = "Input file ("+ sys.argv[1] + ") isn't a .elf file"
        print(errorStr)
        quit()

target = int(sys.argv[2], 16)

result = subprocess.run(['arm-none-eabi-objdump', '-t', sys.argv[1]], stdout=subprocess.PIPE)
resultString = result.stdout.decode('utf-8')

allStarts = list()
allNames = list()

for line in resultString.splitlines():
    splitStr = line.split()
    size = len(splitStr)
    if size == 6:
        allStarts.append(int(splitStr[0], 16))
        allNames.append(splitStr[5])
    elif size == 5:
        allStarts.append(int(splitStr[0], 16))
        allNames.append(splitStr[4])

it = 0
total = len(allStarts)
closestName = ""
closestDistance = -1
while it < total:
    if target >= allStarts[it]:
        distance = target - allStarts[it]
        if closestDistance == -1:
            closestDistance = distance
            closestName = allNames[it]
        elif distance < closestDistance:
            closestDistance = distance
            closestName = allNames[it]
    it += 1

print(closestName)
