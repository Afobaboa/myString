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
    char*  toStringCopy = toString;
    size_t charNum      = 0;

    while (*fromString != '\0') {
        toString[charNum] = fromString[charNum];
        charNum++;
    }    
    toString[charNum] = '\0';

    return toStringCopy;
}


char* my_strncpy(char* toString, const char* fromString, const size_t maxCharCount) {
    char*  toStringCopy = toString;
    size_t charNum      = 0;

    while (charNum < maxCharCount && toString[charNum] != '\0') {
        toString[charNum] = fromString[charNum];
        charNum++;
    } 
    *toString = '\0';

    return toStringCopy;
}


char* my_strcat(char* toString, const char* fromString) {
    
}


char* my_fgets(char* string, const size_t maxCharCount, const FILE* file) {

}


char* my_strdup(const char* string) {
    
}