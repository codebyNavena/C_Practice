#include<stdio.h>
#include<string.h>

int main()
{

    char string1[20];
    //char string2[];

    printf("Enter your name in lower case:  ");
    scanf("%s", string1);

    strupr(string1);
    printf("YOUR NAME IN UPPERCASE=%s",string1);
    return 0;

}