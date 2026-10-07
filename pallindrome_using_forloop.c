#include <stdio.h>

int main()
{
    int i, n, rev = 0, r, original;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n; // Save a copy because 'i' will become 0 during the loop

    // Reverse the number
    for (i = n; i > 0; i = i / 10)
    {
        r = i % 10;
        rev = (rev * 10) + r;
    }

    // Compare original number with the reversed number
    if (original == rev)
    {
        printf("%d is a Palindrome number.\n", original);
    }
    else
    {
        printf("%d is NOT a Palindrome number.\n", original);
    }

    return 0;
}