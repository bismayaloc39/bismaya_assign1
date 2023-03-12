#include<stdio.h>
void main()
{
    int a,b,i,x=1;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    switch(x)
    {
        case 1: i=a+b;
        printf("sum of two numbers:%d\n",i);
        case 2: i=a-b;
        printf("subtraction of two numbers:%d\n",i);
        case 3: i=a*b;
        printf("multiplication of two numbers:%d\n",i);
        case 4: i=a/b;
        printf("division of two numbers:%d\n",i);
        default: i=a%b;
        printf("modulus of two numbers:%d\n",i);
    }
}
    
