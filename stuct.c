#include<stdio.h>

struct student{
    char name[40];
    int age;
    int regno;
};
int main(){
struct student classlist[3];
student(classlist,3);
//void student(struct student s[],int size);
return 0;
}

void student(struct student s[],int size)
{
int i;
for(i=0;i<3;i++)
    {
    printf("Enter student name:");
    printf("Enter student age: ");
    printf("Enter regno: ");
    scanf("%s",s[i].name);
    scanf("%d",&s[i].age);
    scanf("%d",&s[i].regno);
    }
}