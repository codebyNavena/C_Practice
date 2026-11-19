#include<stdio.h>
int main()
{
 
    int a[]={5,15,25,35},i;
    int *p=a;

    for(i=0;i<4;i++)
    {
        printf("%d\n",*p);
        p++;
    }

    int *q=NULL;
    if(q==NULL)
    {
        printf("Q is not pointing to anywhere\n");
    }
    return 0;
}
