#include <stdio.h>
#include <math.h>
void main()
{
float a,b,c,x,w,z;
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);
x=b*b-a*4*c;
if (a==0){
     printf("x=%f",((-c)/b));
}
else 
     {if (x==0){
         printf("x=%f",((-b)/2*a))   ; 
}     
     if(x>0){
         z=((-b)- sqrt(x))/(2*a);
         w=((-b)+ sqrt(x))/(2*a);
         printf("x1=%f\nx2=%f",z,w);}
     else{
         x=(-1)*x;
         x=sqrt(x);
         printf("x1=(i*%f+%f)/2%f\nx2=(-i*%f+%f)/2%f",x,b,a,x,b,a);
            }
}
}
