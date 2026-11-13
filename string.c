#include<stdio.h>
#include<string.h>

int main()
{

    char string1[]= "Josh";
    char string2[]= "chen";

    //strlwr(string1);
    //strupr(string2);
    //strcat(string1,string2);
    //strncat(string1,string2,2);
    //strcpy(string1,string2);
    //strncpy(string1,string2, 2);
    //strset(string2, '&');
    // string1[2]='N';
   // strnset(string2, 'v',2);
   //strrev(string1);
    //int result= strlen(string1);
    int result= strcmp(string1, string2);
    
    printf("%d",result);
//return 0;
}