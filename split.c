#include<stdio.h>
int main()
{
    int odd[10],even[10],i,n,index1=0,index2=0,a[10];
    printf("Enter the no of elements:\n");
    scanf("%d",&n);
    printf("Enter array one by one:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            odd[index1]=a[i];
            index1++;
        }
    else
    {
        even[index2]=a[i];
        index2++;
    }
    }
    printf("\nOdd Array elements are :\n");
    for(i=0;i<index1;i++)
    {
    printf("%d",odd[i]);
    }
    printf("\nEven Array elements are :\n");
    for(i=0;i<index2;i++)
    {
    printf("%d",even[i]);
    }
    return 0;
}