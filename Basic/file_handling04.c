#include <stdio.h>

int main() {
    FILE *fp = fopen("chars.txt", "w");
    
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char str[] = "All is Well"; 
    for (int i = 0; str[i] != '\0'; i++) {
        fputc(str[i], fp); 
    }

    fclose(fp);
    return 0;
}
