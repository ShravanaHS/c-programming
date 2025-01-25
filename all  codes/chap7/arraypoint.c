#include<stdio.h>
int main(){
    int marks[] = {5,10,15};

    int *ptr = &marks[0];
    //int *ptr =  marks;
    for ( int i=0 ; i<3 ; i++){
        printf("the marks at %d is %d \n", i , *ptr);
        ptr ++;
        
    }
     return 0;

}