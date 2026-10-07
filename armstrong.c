#include <stdio.h>

int main()
{
    int num, i, remainder, sum = 0;

    printf("Enter a 3-digit integer: ");
    scanf("%d", &num);

    // Loop extracts last digit, cubes it, adds to sum, then drops last digit
    for (i = num; i > 0; i = i / 10)
    {
        remainder = i % 10;
        sum = sum + (remainder * remainder * remainder);
    }

    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is NOT an Armstrong number.\n", num);

    return 0;
}