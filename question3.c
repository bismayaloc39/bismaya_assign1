#include<stdio.h>
void main()
{
    int sum=0,i,j;
    printf("enter a number");
    scanf("%d",&i);
    do
    {
        j=i%10;
        sum=sum+j;
        i=i/10;
    }while(i>0);
    printf("sum of digit:%d",sum);
}
    
    