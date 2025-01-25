#include <stdio.h>
void main()
{
    int n,i, fact;
    printf("enter n ");
    scanf("%d", &n);


    for(i=1;i<n;i++){
    printf("factorial of %d is ", n);
      fact *= i ;
}
printf("the sum is %d",fact);
}