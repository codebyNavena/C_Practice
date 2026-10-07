#include<stdio.h>
void great(int);
int main()
{
    int a;
    printf("Enter the value of A\n");
    scanf("%d",&a);
    great (a);
    return 0;
}

void great(int a)
{
    if(a>0)
    printf("A is positive");

    else if (a<0)
    printf("A is negative");

    else
    printf("A is ZERO");
}