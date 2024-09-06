#include <stdlib.h>
#include "../my_string.h"


int main(int argc, char* argv[]) { 
    // my_puts()
    if (argc > 1) {
        printf("my_puts(): ");
        my_puts(argv[1]);
    }


    // my_strlen()
    if (argc > 1)
        printf("my_strlen(): %zu\n", my_strlen(argv[1]));


    // my_strcpy()
    if (argc > 1) {
        char* string = (char*) calloc(my_strlen(argv[1]) + 1, sizeof(char));
        string = my_strcpy(string, argv[1]);
        printf("my_strcpy(): %s\n", string);
        free(string);
        string = NULL;
    }


    // my_strncpy()
    if (argc > 1) {
        size_t stringLength = my_strlen(argv[1]);
        char* string = (char*) calloc(stringLength + 1, sizeof(char));
        string = my_strncpy(string, argv[1], stringLength - 2); 
        printf("my_strncpy(): %s.\n", string);
        free(string);
        string = NULL;
    }


    // my_fgets()
    FILE* file = fopen("test.txt", "r");
    char* string = (char*) calloc(21, sizeof(char));
    string = my_fgets(string, 20, file);
    printf("my_fgets(): %s\n", string);
    free(string);
    string = NULL;
    fclose(file);


    // my_strdup()
    string = my_strdup("blablabla");
    printf("my_strdup(): %s\n", string);
    free(string);
    string = NULL;

    
    return 0;
}