#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // Check if the sum of any two sides is greater than the third side
    if (a + b > c && a + c > b && b + c > a)
        printf("Valid");
    else
        printf("Invalid");

    return 0;
}
