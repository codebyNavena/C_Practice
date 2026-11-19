#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;

    printf("Value of a is =%d\n",a);
    printf("Address of a %p\n",&p);
    printf("Value of a %d\n",*p);

    return 0;
}