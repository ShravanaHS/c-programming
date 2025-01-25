#include<stdio.h>

void main() {
    int i = 0;  // Initialize i to 0

    do {
        // Only print if i is 10 or greater
        if (i >= 10) {
            printf("%d\n", i);
        }
        
        // Increment i after each iteration
        i++;

    } while(i <= 20);  // Loop until i is less than or equal to 20
}
