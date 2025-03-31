#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        printf("*");
    }
    printf("\n");
    for(int j=0;j<n;j++)
    {
        if(j==0)
        {
            printf("*");
        } else if(j==n-1) {
            printf("*\n");
        } else {
            printf(" ");
        }

    }

    for(int k = 0; j < n ; j++)
    {
        printf("*")
    }
}