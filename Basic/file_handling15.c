#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "a");  // "a" = append mode

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Country: Bangladesh\n");
    
    fclose(fp);
    return 0;
}
