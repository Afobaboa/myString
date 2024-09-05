#ifndef MY_STRING_H
#define MY_STRING_H


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


#endif // MY_STRING_H