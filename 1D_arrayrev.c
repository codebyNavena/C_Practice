#include<stdio.h>
int main()

{
    //getting n1
    int a[10],b[10],combined[20],n1,n2,i,k=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n1);
    printf("Enter %d of numbers\n",n1);
    
    for(i=0;i<n1;i++)
    {
        scanf("%d", &a[i]);
    }
    
    //getting n2
    printf("Enter the no of elements");
    scanf("%d",&n2);
    printf("Enter %d of numbers\n",n1);

    for(i=0;i<n2;i++)
    {
        scanf("%d", &b[i]);
    }

    for(i=0;i<n2;i++)
    {
        combined[k]=a[i];
        k++;
    }

    for(i=n2-1;i>=0;i--)
    {
        combined[k]=b[i];
        k++;
    }

    printf("Merge array: ");
    for(i=0;i<k;i++)
    {
        printf("%d", combined[i]);
    }
    return 0;
}