#include <stdio.h>
#include <math.h>
void main()
{
int    k,a,b,c,d;
scanf("%d",&a);
b=a%10;
c=(a/10)%10;
d=(a/100)%10;
a=a/1000;
k=a*b*c*d;
b=a+b+c+d;
printf("%d,summ %d",k,b);
}
