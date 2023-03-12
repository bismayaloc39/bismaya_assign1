#include<stdio.h>
void main()
{
   float i,r,d,c,a,pi=3.142;
   printf("enter radius of circle \n");
   scanf("%f",&r);
   
   d=2*r;
   c=2*pi*r;
   a=pi*pi*r;
   printf("Diameter of circle=%f\n",d);
   printf("Circumference of circle=%f\n",c);
   printf("Area of circle=%f\n",a);
}
