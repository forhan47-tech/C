#include <stdio.h>

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {3, 4, 5, 6, 7};
    int nA = sizeof(A) / sizeof(A[0]);
    int nB = sizeof(B) / sizeof(B[0]);

    int intersection = 0, unionSet = nA + nB;

    // Compute intersection
    for (int i = 0; i < nA; i++) {
        for (int j = 0; j < nB; j++) {
            if (A[i] == B[j]) {
                intersection++;
                break;
            }
        }
    }

    unionSet -= intersection; // Adjust union count

    double jaccardSimilarity = (double)intersection / unionSet;
    printf("Jaccard Similarity: %.2f\n", jaccardSimilarity);

    return 0;
}
