#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
