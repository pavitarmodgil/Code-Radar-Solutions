#include <stdio.h>

int main() {
    char inp[10];
    int inp1;
    char inp2[10];
    scanf("%s %d %s", inp, &inp1, inp2);
    printf("Name: %s\n", inp);
    printf("Age: %d\n", inp1);
    printf("Hobby: %s\n", inp2);
    return 0;
}

