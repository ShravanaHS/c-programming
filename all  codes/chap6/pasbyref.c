#include<stdio.h>
int sum(int x , int y , int z);
float avg(int x , int y , int z);

int sum(int x , int y , int z)
{
    int su = x+y+z;
     printf(" the address of sum is %p", &su);
    return su;
}

float avg(int x , int y , int z)
{
    float av = (x+y+z)/3;
     printf(" the adrss of avg is  %p" , &av);
    return av;
}



int main()
{
    int i =10;
    int j=20;
    int k= 30;
    printf(" the sum is %d", sum(i,j,k));
    printf("the average is %f", avg(i,j,k));

}