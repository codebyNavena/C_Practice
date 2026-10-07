#include<stdio.h>
int main()
{
    int n,res=0,temp,r;
    printf("enter the value of N\n");
    scanf("%d",&n);
    temp=n;
    
    while(n>0)
    {
        r=n%10;
        res=res*10+r;
        n=n/10;

        if(temp==res)
        printf("\nPallindrome");

        else
        printf("\nNot Pallindrome");
    }
}