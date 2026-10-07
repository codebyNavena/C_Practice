#include <stdio.h>

int main()
{
    int a, b, i, gcd = 1;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    // Loop from 1 up to the smaller of the two numbers
    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0) // Check if i divides both numbers
        {
            gcd = i;
        }
    }

    printf("GCD of %d and %d is %d\n", a, b, gcd);

    return 0;
}