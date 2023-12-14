#include <stdio.h>
void main() 
{
    int n,i;
    float e = 1.0; 
    printf("Enter the number of terms to estimate e: ");
    scanf("%d", &n);
    float term = 1.0;
    for (i = 1; i <= n; i++) 
    {
        term /= i; 
        e += term;
    }
    printf("Estimated value of e with %d terms: %f\n", n, e);
}
