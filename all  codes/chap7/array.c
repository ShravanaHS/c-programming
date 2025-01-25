#include<stdio.h>

int main() {
    int array[10];

    printf("The size of the given array is %d \n", sizeof(array));
    printf("The size of each element in the array is %d \n", sizeof(array[0]));
    printf("Length of the array will be: %d \n", sizeof(array) / sizeof(array[0]));

    int length = sizeof(array) / sizeof(array[0]);

   
    for (int j = 0; j < length; j++) {
        printf("Enter the %dth element of the array: \n", j);
        scanf("%d", &array[j]);
    }

   
    printf("[");
    for (int i = 0; i < length; i++) {
        printf("%d", array[i]);

      
        if (i < length - 1) {
            printf(", ");
        }
    }
    printf("]");  

    return 0;
}