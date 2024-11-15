CXX ?= g++

CXXFLAGS := -Werror -std=c++17 -pthread -O2

INCLUDES := -I .

SRCS := palcompress.cpp

ifeq ($(OS),Windows_NT)
EXE := .exe
else
EXE :=
endif

.PHONY: all clean

all: palCompress$(EXE)
	@:

palCompress$(EXE): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $@ $(LDFLAGS)

clean:
	$(RM) palCompress palCompress.exe
