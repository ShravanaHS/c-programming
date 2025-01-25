#include <stdio.h>
void main()
{
    int n,i,sum;
    printf("enter the value of n:\n");
    scanf("%d", &n);
    printf("the multiplication table of %d is \n" ,n);

    for(i=1;i<11;i++){
    printf("%d * %d = %d \n", n,i,n*i);
      sum += n*i ;
}
printf("the sum is %d",sum);
}