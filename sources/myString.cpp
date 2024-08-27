#include <stdio.h>


void putstr(char* string) {
    for (int i = 0; string[i] != '\0'; i++) 
        putchar(string[i]);
    putchar('\n');
}


char* strchr(const char* string, const char symbol) {

}