#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "w");
    
    if (fp == NULL) 
        return 1;

    for (int i = 1; i <= 3; i++) {
        fprintf(fp, "ID: %d, Score: %.2f\n", i, i * 10);
    }
    fclose(fp);
    return 0;
}
