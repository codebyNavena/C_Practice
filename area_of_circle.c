#include<stdio.h>
float area(float);
float main()
{
    float n,res;
    printf("Enter the value of Area");
    scanf("%f", &n);
    res=area(n);
    printf("\nArea of the circle is:%f",res);
    return 0;
}

float area(float n)
{
    float A;
    A=3.14*n*n;
    return A;
}