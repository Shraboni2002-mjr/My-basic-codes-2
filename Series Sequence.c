#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n < 1)
        {
        printf("Number of terms should be at least 1.\n");
        return 1;
    }

    int term;
    printf("Triangular Series: ");

    for (int i = 1; i <= n; ++i)
        {
        term = (i * (i + 1)) / 2;
        printf("%d", term);
        if (i != n)
            {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
