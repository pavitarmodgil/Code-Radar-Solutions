#include <stdio.h>

int main() {
    int num;
    printf("");
    scanf("%d", &num);

    if (num & 1)
        printf("Set\n");
    else
        printf("Not Set\n");

    return 0;
}
