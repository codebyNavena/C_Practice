//QUATRATIC EQUATION
#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,r1,r2,R,I;
printf("Enter A and B");
scanf("%f%f%f",&a,&b,&c);

d= b*b-4*a*c;

if(d==0)
{
    printf("Roots are reall");
    r1=r2=-b/(2*a);
    printf("r1=%f\nr2=%f",r1,r2);
}

else if(d>0)
{
    printf("Roots are Real and unequal");
    r1=(-b+ sqrt(d))/(2*a);
    r2=(-b- sqrt(d))/(2*a);
    printf("r1=%f\nr2=%f",r1,r2);
}

else
{
    printf("Roots are IMAGINARY");
    R=-b/(2*a);
    I= sqrt(-d)/(2*a);
    printf("\n%f+%fi",R,I);
    printf("%f-%fi",R,I);

}
return 0;
}