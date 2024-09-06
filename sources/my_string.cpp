#include <assert.h>
#include <stdlib.h>
#include "../my_string.h"


// TODO:
// strlen()
// strcpy()
// strncpy()
// strcat()
// strncut()
// fgets() 
// strdup()
// getline()


void my_puts(const char* string) {
    for (size_t charNum = 0; string[charNum] != '\0'; charNum++) 
        putchar(string[charNum]);
    putchar('\n');
}


char* my_strchr(const char* string, const char symbol) {
    do {
        if (*string == symbol)
            return (char*) string;
        string++;
    } while (*string != '\0');

    return NULL;
}


size_t my_strlen(const char* string) {
    size_t charNum = 0;
    for (; string[charNum] != '\0'; charNum++);
    return charNum;
}


char* my_strcpy(char* toString, const char* fromString) {
    if (toString == NULL || fromString == NULL)
        return NULL;

    size_t charNum = 0;

    while (fromString[charNum] != '\0') {
        toString[charNum] = fromString[charNum];
        charNum++;
    }    

    toString[charNum] = '\0';

    return toString;
}


char* my_strncpy(char* toString, const char* fromString, const size_t maxCharCount) {
    if (toString == NULL || fromString == NULL)
        return NULL;

    size_t charNum = 0;

    while (charNum < maxCharCount && fromString[charNum] != '\0') {
        toString[charNum] = fromString[charNum];
        charNum++;
    } 

    toString[charNum] = '\0';

    return toString;
}


char* my_strcat(char* toString, const char* fromString) {
    size_t toStringLength    = my_strlen(toString);
    size_t fromStringCharNum = 0;

    while (fromString[fromStringCharNum] != '\0') {
        toString[toStringLength + fromStringCharNum] = fromString[fromStringCharNum];
        toStringLength++;
        fromStringCharNum++;
    }

    toString[toStringLength + fromStringCharNum] = '\0';

    return toString;
}


char* my_fgets(char* string, const size_t maxCharCount, FILE* file) {
    size_t charNum = 0;

    for (; charNum < maxCharCount-1; charNum++) {
        int c = fgetc(file);
        if (c == EOF || c == '\n' || c == '\0')
            break;

        string[charNum] = (char) c;
    }

    string[charNum] = '\0';

    return string;
}


char* my_strdup(const char* string) {
    char* stringCopy = (char*) calloc(my_strlen(string) + 1, sizeof(char));

    assert(stringCopy);
    assert(string);
    
    return my_strcpy(stringCopy, string);
}