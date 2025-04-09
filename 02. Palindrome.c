#include<stdio.h>
int main()
{
    char a1[10];
    char a2[10];
    gets (a1);
    gets (a2);
    strrev (a2);
    int d= stremp(a1,a2);
    if(d==0)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a Palindrome\n");
    }
    return 0;
}
