#include <stdio.h>

int main() {
    char *strings[] = {
        "Hello",
        "World",
        "C Programming"
    };

    int size = sizeof(strings) / sizeof(strings[0]); 

    for (int i = 0; i < size; i++) {
        printf("%s\n", strings[i]); 
    }

    return 0;
}

