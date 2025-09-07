#include <stdio.h>

int main() {
    FILE *fp = fopen("chars.txt", "w");
    
    if (fp == NULL) return 1;

    for (char ch = 'A'; ch <= 'E'; ch++) {
        fputc(ch, fp);
    }

    fclose(fp);
    return 0;
}
