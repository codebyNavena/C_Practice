#include<stdio.h>
int main()
{

int i,n,rev=0,r;
printf("Enter a number: ");
scanf("%d",&n);

for(i=n;i>0;i=i/10)
{
    r=i%10;
    rev=(rev*10)+ r;
}
printf("Reversed number = %d\n", rev);
return 0;
}