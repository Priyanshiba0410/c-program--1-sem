#include <stdio.h>
int main()
{
    int count = 0; 
    float height, weight;
    for (int i = 1; i <= 5; i++) 
    {
        printf("Enter the height for person %d (in cm): ", i);
        scanf("%f", &height);
        printf("Enter the weight for person %d (in kg): ", i);
        scanf("%f", &weight);
        if (height > 170 && weight < 50)
        {
            count++; 
        }
    }
    printf("Number of people with height > 170 and weight < 50: %d", count);
}
