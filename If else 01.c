#include<stdio.h>
int main()
{
    int n;
    n = 10;

    printf("Enter any integer: ");
    scanf("%d", &n);

    if(n > 0)
    {
        printf("The number is positive");
    }

    else if(n < 0)
    {
        printf("The number is negative");
    }

    else
    {
        printf("The number is 0");
    }
    return 0;
}
