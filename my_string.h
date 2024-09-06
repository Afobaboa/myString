#ifndef MY_STRING_H
#define MY_STRING_H


#include <stddef.h>
#include <stdio.h>


/**
 * Print string to stdin.
 * this function automatically
 * add '\n' to the end of output.
 */
void my_puts(const char* string); 


/**
 * This function find
 * symbol in string.
 * 
 * @return pointer to first entry
 * of symbol to string.
 * @return NULL if there aren't
 * any entry of symbol to string.
 */
char* my_strchr(const char* string, const char symbol);


size_t my_strlen(const char* string);


char* my_strcpy(char* toString, const char* fromString);


char* my_strncpy(char* toString, const char* fromString, const size_t charCount);


char* my_strcat(char* toString, const char* fromString);


char* my_fgets(char* string, const size_t maxCharCount, FILE* file);


char* my_strdup(const char* string);


#endif // MY_STRING_H