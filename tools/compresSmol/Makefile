CC = g++

compresSmol : main.cpp tANS.cpp delta.cpp fileDispatcher.cpp newMethod.cpp
	$(CC) -o compresSmol -O2 -Wunused main.cpp tANS.cpp delta.cpp fileDispatcher.cpp newMethod.cpp

debug : main.cpp tANS.cpp delta.cpp fileDispatcher.cpp newMethod.cpp
	$(CC) -g -o0 -o compresSmol main.cpp tANS.cpp delta.cpp fileDispatcher.cpp newMethod.cpp

clean:
	rm compresSmol
