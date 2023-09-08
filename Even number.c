
#include <stdio.h>

int main()
{
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    printf("Even numbers up to %d are:\n", n);

    int i = 0;
    while (i <= n)
    {
        printf("%d\n", i);
        i = i + 2;
    }

    return 0;
}

