
#include <stdio.h>

// function prototype
float average(int, int, int);

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{
    int x = 10;
    int y = 20;
    int z = 30;
    float d;
    average(x, y, z);

    d = average(x, y, z);
    printf("average %f", d);

    return 0;
}