#include<stdio.h>
int main()
{
    int a[10],i,n,max;
    printf("Enter the no of elements:\n");
    scanf("%d",&n);
    printf("Enter the Array one by one:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("\nMax Elements = %d",max);
    return 0;
}