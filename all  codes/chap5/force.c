
#include <stdio.h>



float force(int);

float force(int m){
    
 return m*9.8;
}


void main()
{
   int m =5;
   printf("the force is %f \n", force(m));
return 0;
}