#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        for(int k = 0; k < n ; k++)
        {
        if(i == 0 || i == n-1 || j==0 || j == n-1) {
            printf("*");
        } else {
            printf(" ");
        }
    }
}
    return 0;
}