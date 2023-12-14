#include <stdio.h>
void main() 
{
    float fahrenheit, celsius;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = ((fahrenheit - 32) * 5) / 9;
    printf("%f\n", celsius);
}
