#include <stdio.h>

int main()
{
    int array[10];

    printf("The size of the given array is %d \n", sizeof(array));
    printf("The size of each element in the array is %d \n", sizeof(array[0]));
    printf("Length of the array will be: %d \n", sizeof(array) / sizeof(array[0]));

    int length = sizeof(array) / sizeof(array[0]);
    int elem 
    printf("enter the value:")

    scanf("%d", &elem);

    for (int i = 0; i < length; i++)
    {
        printf("%d X %d = %d" , elem , i , elem*i);
      

   
    }

    return 0;
}
