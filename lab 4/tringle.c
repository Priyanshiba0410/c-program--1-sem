#include <stdio.h>
void main() {
    float height, base;
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    float area = (height * base) / 2;
    printf("%f\n", area);
}
