#include <stdio.h>

float ctof(float c);
float ftoc(float f);

float ftoc(float f)
{
    return (5.0 / 9.0) * (f - 32);
}

float ctof(float c)
{
    return ((9.0 / 5.0) * c) + 32;
}

int main()
{
    int x;
    printf("What do you want to perform?\nIf you want to perform Celsius to Fahrenheit, type 1. Else, type 2: ");
    scanf("%d", &x);  

    float f, c;
    
    if (x = 1)  
    {
        printf("Enter the Fahrenheit value: ");
        scanf("%f", &f);
        c = ftoc(f);
        printf("%.2f Fahrenheit = %.2f Celsius\n", f, c);  // Fixed spelling
    }
    else
    {
        printf("Enter the Celsius value: ");
        scanf("%f", &c);
        f = ctof(c);
        printf("%.2f Celsius = %.2f Fahrenheit\n", c, f);  
    }
    
    return 0;
}