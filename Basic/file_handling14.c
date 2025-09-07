#include <stdio.h>

int main() {
    FILE *fp = fopen("lines.txt", "w");
    
    if (fp == NULL) return 1;

    for (int i = 1; i <= 5; i++) {
        char line[50];
        sprintf(line, "This is line number %d\n", i);
        fputs(line, fp);
    }

    fclose(fp);
    return 0;
}
