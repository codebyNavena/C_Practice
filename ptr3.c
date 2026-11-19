#include<stdio.h>

void printarray(int*p,int n);
int main()
{
    int n[]={2,4,6,8,10};
    printarray(n,5);
    return 0;
}

void printarray(int *p,int n)
{
    int i;

    for(i=0;i<5;i++)
    {
        printf("%d\n",p[i]);
    }    
}