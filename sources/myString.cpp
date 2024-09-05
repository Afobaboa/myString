#include <stdio.h>
#include "../my_string.h"


// TODO:
// strlen()
// strcpy()
// strncpy()
// strcat()
// strncut()
// fgets()
// strdup()
// getlen()


void my_puts(char* string) {
    for (size_t charNum = 0; string[charNum] != '\0'; charNum++) 
        putchar(string[charNum]);
    putchar('\n');
}


char* my_strchr(const char* string, const char symbol) {
    if (symbol == '\0')
        return string + my_strlen(string);
    
    for (size_t charNum = 0; string[charNum] != '\0'; charNum++)
        if (string[charNum] == symbol) 
            return string + charNum;

    return NULL
}


size_t my_strlen(char* string) {
    size_t charNum = 0;
    for (; string[charNum] != '\0'; charNum++)
    return charNum;
}


char* my_strcpy(char* toString, const char* fromString) {

}


char* my_strncpy(char* toString, const char* fromString, size_t charCount) {

}


char* my_strcat(char* toString, char* fromString) {

}


char* my_fgets(char* string, size_t maxCharCount, FILE* file) {

}


char* my_strdup(const char* string) {
    
}