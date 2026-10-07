#include<stdio.h>
int main()
{
    int a,b,n;
    printf("Enter A and B: ");
    scanf("%d%d",&a,&b);
    printf("1-Addition\n2-Subbraction\n3-Multiplication\n4-Division");
    printf("\nEnter the required option (1-5)- ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("Addition= %d",a+b);
        break;

        case 2:
        printf("Subraction= %d",a-b);
        break;

        case 3:
        printf("Multiplication= %d",a*b);
        break;

        case 4:
        printf("Division= %d",a/b);
        break;
    }
    return 0;
}