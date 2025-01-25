
#include <stdio.h>



int fsum(int);

int fsum(int n){
    if(n==1){
        return 1;
    }
    else{
    return n + fsum(n-1);
 
}
    
}


int main()
{
   int n =5;
   printf("the sum of 1st %d numbers is %d \n", n , fsum(n));
return 0;
}