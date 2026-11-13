
#include <stdio.h>

int main()
{
int i;

    char bts[][10]={"Taehyung" , "Jungkook" ,"Jimin"};
    int size = sizeof(bts)/sizeof(bts[0]);

    for(i=0;i<size;i++){
        printf("%s\n", bts[i]);
    }
    return 0;
}
