#include <stdio.h>
void main()
{
    int n,i;
    printf("enter the value of n:\n");
    scanf("%d", &n);
    printf("the multiplication table of %d is \n" ,n);

    for(i=10;i>0;i--){
    printf("%d * %d = %d \n", n,i,n*i);
}
}