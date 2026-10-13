#include<stdio.h>
int main()
{
    int a[100],i,n,element,found = 0;
    printf("Enter the no of elements: ");
    scanf("%d", &n);
    printf("Enter %d of elements: ",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the elements needed to be searched: ");
    scanf("%d",&element);

    for(i=0;i<n;i++)
    {
        if(a[i]==element)
        {
            found=1;
            break;      
        }
    }

    if(found==1)
    printf("element is present");
    else
    printf("element is not present");

    return 0;
}