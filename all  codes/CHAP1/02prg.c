#include <stdio.h>

int main() {
    float pi = 3.14;
    int r, h;
    float v;

    printf("Enter the radius of the cylinder: ");
    scanf("%d", &r);

    printf("Enter the height of the cylinder: ");
    scanf("%d", &h);

    v = pi * r * r * h;

    printf("The volume of the cylinder with radius %d and height %d is: %.2f\n", r, h, v);

    return 0;
}
