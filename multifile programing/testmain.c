#include<stdio.h>
#include"fun.h"
int main()
{
    int num1=5,num2=10,num=3,num3,num4;
    num3= sum(num1,num2);
    num4=sqr(num);

    printf("The sum of the numbers is %d and the square of the given number is %d",num3,num4);
    return 0;
}