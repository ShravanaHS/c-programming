
#include <stdio.h>

int fibb(int m);  // Changed return type to int

int fibb(int m) {
    if (m == 0) {      // Added base case for m == 0
        return 0;
    } else if (m == 1 || m == 2) {  // Base case for m == 1 or m == 2
        return 1;
    } else {
        return fibb(m - 2) + fibb(m - 1); 
    }
}

int main() {  
    int m = 4;
    printf("The Fibonacci number at position %d is %d\n", m, fibb(m));  
    return 0;
}
