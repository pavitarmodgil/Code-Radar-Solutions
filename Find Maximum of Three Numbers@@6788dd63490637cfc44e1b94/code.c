#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // Compare numbers to find the maximum
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("%d", max);

    return 0;
}
