#include <stdio.h>

int main() {
    float inp,inp1,inp2;
    scanf("%f %f %f", &inp, &inp1, &inp2);
    float avg = (inp + inp1 + inp2) / 3.0;
    printf("Average: %.2f", avg);
    return 0;
}

