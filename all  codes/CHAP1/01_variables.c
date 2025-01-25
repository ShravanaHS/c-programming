#include<stdio.h>

int main(){
    float pi = 3.14;
    int r;

    printf("enter radius:");
    scanf("%d", &r);

    printf("area of circle is %f:", pi*(r*r));
  
    return 0;
} 
