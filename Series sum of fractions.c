#include<stdio.h>
int main()
{
    int sum = 0, i, n;
    printf("Enter n = ");
    scanf("%d", &n);
    for(i = 1; i<=n; i++)
    {
        sum = sum + (1/i);
        if(i==1)
            printf("\n1 + ");
        else if(i==n)
            printf("1/%lf", i);
        else
            printf("(1/%lf) +", i);
    }
    printf("\nSum = %.2lf", sum);
}
