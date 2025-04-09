#include<stdio.h>
int main()
{
    int a;

    // Integers have 4 bytes of space in memory. That's why it can print number within -2147483648 to 2147483647

    a = 1000;
    printf("Value of a is %d\n", a);

    a = -21000;
    printf("Value of a is %d\n", a);

    a = 10000000;
    printf("Value of a is %d\n", a);

    a = -10000000;
    printf("Value of a is %d\n", a);

    a = 100020004000503;
    printf("Value of a is %d\n", a);

    a = -4325987632;
    printf("Value of a is %d\n", a);

    return 0;
}
