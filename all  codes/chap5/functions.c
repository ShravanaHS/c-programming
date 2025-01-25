// Online C compiler to run C program online
#include <stdio.h>


//function prototype
int sum(int,int);

//function defination
int sum(int x,int y){
    printf("the sum is %d \n",x+y);
 return x+y;
}


void main()
{
    int a =10;
    int b=20;
    sum(a,b);

    int c =20;
    int d =5;
    sum(c,d);

return 0;
}