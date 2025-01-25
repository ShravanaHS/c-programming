#include<stdio.h>

int main() {
   
    char array[5] = {"hello"};  

   
    printf("The size of the given array is %zu bytes\n", sizeof(array));
    printf("The size of each element in the array is %zu bytes\n", sizeof(array[0]));
    printf("Length of the array will be: %zu \n", sizeof(array) / sizeof(array[0]));

    int length = sizeof(array) / sizeof(array[0]);

    printf("[");
    for (int i = 0; i < length; i++) {
        
        printf("Address of array element %d: %p \n", i, &array[i]);

        if (i < length - 1) {
            printf(", ");
        }
    }
    printf("]\n");

 
 

    return 0;
}
