#include<stdio.h>
void main()
{
    int a[100],i,n,sum=0;
    float average;
    printf("enter a size of array[1-100]: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    average = (float)sum/n;
    printf("Sum=%d \t Average=%f", sum, average);
    for(i=0;i<n;i++)
    {
        if(a[i]<average)
        {
            printf("%d",a[i]);
        }
    }
}
    