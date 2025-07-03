#include <stdio.h>
#include <math.h>

int main() {
    int m;
    long long sum = 0;

    printf("Enter upper limit m: ");
    scanf("%d", &m);

    for (int x = 1; x <= m; x *= 2) {
        sum += pow(x, 4);
    }

    printf("Sum of the series = %lld\n", sum);
    return 0;
}
