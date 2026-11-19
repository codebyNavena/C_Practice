#include<stdio.h>

int main()
{
    int x=4;
    int *p=&x;
    void doubleit(int *v);
    doubleit(p);
    printf("Value of X is %d\n",x);
    return 0;
}

void doubleit(int *v)
{
    *v=*v*2;
}