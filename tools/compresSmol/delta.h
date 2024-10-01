#include <stdio.h>
#include <stdlib.h>
#include <vector>

void deltaEncode(std::vector<unsigned char> *buffer, int length);
void deltaDecode(std::vector<unsigned char> *buffer, int length);
