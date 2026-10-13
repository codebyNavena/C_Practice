#include<stdio.h>
int main()
{
    int a[3][3],i,j,m,n,sum;
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
           if(i==j)
        {
            sum=sum=a[i][j];
        }       
         }   
    }
    printf("sum=%d",&sum);
    return 0;
}