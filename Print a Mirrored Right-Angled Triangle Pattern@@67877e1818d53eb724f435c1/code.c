#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 0; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
