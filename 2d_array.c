#include<stdio.h>
int main()
{
    int a[3][3],i,j,m,n;
    printf("Enter rows and coloumns: ");
    scanf("%d%d",&m,&n);
    printf("Enter the array elements");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }   
    }
    printf("Array elementd are\n");
    for(i=0;i<m;i++)
    {
         for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }   
    }
    return 0;
}