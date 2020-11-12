#include <stdio.h>
#include <math.h>
void main()
{
float a,b,c,p,s;
scanf("%f",&a);
scanf("%f",&b);
c=(a*a)+(b*b);
c=sqrt(c);
s=(a*b)/2;
p=a+b+c;
printf("hypotenuse %f,s %f,p %f",c,s,p);
}
