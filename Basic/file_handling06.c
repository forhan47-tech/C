#include <stdio.h>

int main() {
    FILE *fp = fopen("lines.txt", "w");
    
    if (fp == NULL) {
        return 1;
    }
    char line[50];

    for (int i = 1; i <= 5; i++) { 
        if (fgets(line, sizeof(line), stdin) != NULL) {
            fputs(line, fp);
        }
    }
    fclose(fp);
    return 0;
}
