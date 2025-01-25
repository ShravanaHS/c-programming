#include<stdio.h>
int main(){
    int y =20;
    int *ptr = &y;
    printf(" address of y is:%p \n" , &y);
     printf(" address of y is:%p" , ptr);                   ///// & is addressss and * is value/data
       printf(" value  of y is:%d" , *ptr);
          printf(" address of ptr is:%p \n" , &ptr);
         printf("data of y is:%d" , *(&y));
    return 0;

}