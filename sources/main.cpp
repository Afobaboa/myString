#include "../my_string.h"


int main(int argc, char* argv[]) {
    for (int i = 1; i < argc; i++)
        my_puts(argv[i]);
    return 0;
}