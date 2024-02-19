#ifndef LAB_17_OWN_STRING_H
#define LAB_17_OWN_STRING_H

#define CHAR_SIZE sizeof(char)

#include <memory.h>
#include <stdbool.h>

size_t getLength(char* string);

char* find(char* start, const char* end, int character);

char* findNonSpace(char* string);

char* findSpace(char* string);

char* findNonSpaceReverse(char* reversedStart, const char* reversedEnd);

char* findSpaceReverse(char* reversedStart, const char* reversedEnd);

int areEqual(char* left, char* right);

char* copy(const char* start, const char* end, char* destination);

char* copyIf(char* start, const char* end, char* destination, bool (*filter)(char));

char* copyIfReverse(char* reversedStart, const char* reversedEnd, char* destination, bool (*filter)(char));

#endif //LAB_17_OWN_STRING_H