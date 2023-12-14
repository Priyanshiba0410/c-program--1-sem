#include <stdio.h>
void main() 
{
    int i,height[5],weight[5],h=0,w=0;
    printf("Enter the height and weight of five people:\n");
    for (i = 1; i < 5; i++) 
    {
        printf("Person %d:\n", i);
        printf("Height (in cm): ");
        scanf("%d", &height[i]);
        printf("Weight (in kg): ");
        scanf("%d", &weight[i]);
        if (height[i] > 170)
        {
            h++;
        }
        if (weight[i] < 50)
        {
            w++;
        }
    }
    printf("height is %d\n",h);
    printf("weight is %d", w);
}
