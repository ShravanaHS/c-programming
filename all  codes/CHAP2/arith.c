#include <stdio.h>

int main()
{
    int a =10, b =1, c =2, d =-5, e =7, f=a, g=-b;
  
    printf("the value of sum a+b is:%d \n ",a+b);
    printf("the value of difference a-b is:%d \n",a-b);
    printf("the value of division  is:%d \n",c/d);
    printf("the value of multiplication c*d is:%d \n",c*d);
    printf("the value of remainder is:%d \n",c%d);
    printf("the value of the exp is is:%f \n",a + (b*(c+e))/(c*(d*g)));
    printf("the value of g is:%d \n",g);
    return 0;
    
}