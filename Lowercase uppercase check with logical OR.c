#include<stdio.h>
int main()
{
    char ch;

    printf("Enter any letter: ");
    scanf("%c", &ch);

    if(ch >= 'a' || ch<= 'z')
    {
        printf("The letter is lowercase letter");
    }

    else if(ch >= 'A' || ch<= 'Z')
    {
        printf("The letter is uppercase letter");
    }

    return 0;
}
