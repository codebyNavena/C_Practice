#include<stdio.h>

int sumarray(int *p,int n);

int main()
{
    int a[]={1,3,5,7},total;
     total= sumarray(a,4);
    printf("sum-%d\n", total);
    return 0;
}

int sumarray(int *p,int n)
{
    int sum=0,i;
    for(i=0;i<4;i++)
    {
    sum=sum+p[i];
    }
    return sum;
    if(sum==16)
    {
        printf("Done\n");
    }
}