

#include <stdio.h>

int main()
{
    int n , sum;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    printf("Odd numbers up to %d are:\n", n);

    int i = 1;
    while (i <= n)
    {
        printf("%d\n", i);
        sum = sum + i;
        i += 2;

    }
     //sum = sum + i;
        printf("summation %d\n", sum);
    return 0;
}
