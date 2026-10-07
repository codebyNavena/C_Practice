#include<stdio.h>
int main()
{
int a;
printf("Enter an integer: ");
scanf("%d",&a);
if(a>0)
{
    printf("positive\n");
}
else if(a<0)
{
    printf("Negative\n");
}
else
printf("ZERO\n");
return 0;
}