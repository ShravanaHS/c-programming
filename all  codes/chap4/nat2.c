#include<stdio.h>

int main(){
    int i = 0;

    while(i < 20){
        if(i > 10){
            printf("The number is %d\n", i + 10);
        }
        i = i + 1;  
    }

    return 0;
}
