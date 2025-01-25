#include <stdio.h>
int main(){
int m1,m2,m3;

{
printf("enter m1:\n");
scanf("%d", &m1);
printf("enter m2:\n");
scanf("%d", &m2);
printf("enter m3:\n");
scanf("%d", &m3);
printf("the entered marks are: %d ,%d and %d \n", m1,m2,m3);

if (m1<33 || m2<33 || m3<33)
{ printf("you are failed");
}
else if(((m1 + m2 + m3)/3)<40)
{
  printf("you are faied ") ; 
}
else {
    printf("you have passed");
}
return 0;
    
}
}