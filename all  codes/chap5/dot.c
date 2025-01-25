#include <stdio.h>



int fsum(int);

int fsum(int n){
    if(n==1){
        return *;
    }
    else{ 
        for (int i = 0 ;  i < n ;i ++){
            for (int j =0 ; j<n-1 ; j++){
            printf("*");
            printf("\n");
        }
        }
 
}
    
}


int main()
{
   int n =5;
  printf("%d", fsum(n));
return 0;
}