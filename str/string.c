#include "string.h"
#include <ctype.h>

size_t getLength(char* string) {

    char* end = string;

    while (*end != '\0') {
        end++;
    }

    return end - string;
}

char* find(char* start, const char* end, int character) {
    while (start != end && *start != character) {
        start++;
    }

    return start;
}

char* findNonSpace(char* string) {
    while (isspace(*string)) {
        string++;
    }

    return string;
}

char* findSpace(char* string) {
    while (!isspace(*string)) {
        string++;
    }

    return string;
}

char* findNonSpaceReverse(char *reversedStart, const char *reversedEnd) {
    while (isspace(*reversedStart) && reversedStart != reversedEnd) {
        reversedStart--;
    }

    return reversedStart;
}

char* findSpaceReverse(char* reversedStart, const char* reversedEnd) {
    while (!isspace(*reversedStart) && reversedStart != reversedEnd) {
        reversedStart--;
    }

    return reversedStart;
}

int areEqual(char* left, char* right) {
    while (*left++ == *right++);

    if (*left > *right) return 1;

    return (*left == *right) ? 0 : -1;
}

char* copy(const char* start, const char* end, char* destination) {
    size_t length = end - start;

    memcpy(destination, start, CHAR_SIZE * length);

    return destination + length;
}

char* copyIf(char* start, const char* end, char* destination, bool (*filter)(char)) {
    while(start != end) {
        if (filter(*start)) {
            memcpy(destination++, start, CHAR_SIZE);
        }

        start++;
    }

    return destination;
}

char* copyIfReverse(char* reversedStart, const char* reversedEnd, char* destination, bool (*filter)(char)) {
    while(reversedStart != reversedEnd) {
        if (filter(*reversedStart)) {
            memcpy(destination++, reversedStart, CHAR_SIZE);
        }

        reversedStart--;
    }

    return destination;
}