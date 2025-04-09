#include<stdio.h>
int main()
{
    int n;


    printf("Enter any integer: ");
    scanf("%d", &n);

    if(n % 2 == 0)
    {
        printf("The number is Even");
    }

    else if(n % 2 != 0)
    {
        printf("The number is Odd");
    }

    else
    {
        printf("The number Invalid ");
    }
    return 0;
}
