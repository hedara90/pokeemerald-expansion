#include "delta.h"

void deltaEncode(std::vector<unsigned char> *buffer, int length)
{
    unsigned char last = 0;
    for (int i = 0; i < length; i++)
    {
        unsigned char current =(*buffer)[i];
        if (current - last < 0)
            (*buffer)[i] = 16+(current-last);
        else
            (*buffer)[i] = current - last;
        last = current;
    }
}

void deltaDecode(std::vector<unsigned char> *buffer, int length)
{
    unsigned char last = 0;
    for (int i = 0; i < length; i++)
    {
        unsigned char delta =(*buffer)[i];
        if (delta + last > 15)
            (*buffer)[i] = (delta + last) - 16;
        else
            (*buffer)[i] = delta + last;
        last =(*buffer)[i];
    }
}
