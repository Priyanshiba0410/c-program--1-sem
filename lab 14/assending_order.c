#include<stdio.h>
void main()
{
    int a[100],n,i,j,min,temp;
    printf("enter value of array[100]: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=0;j<n;j++)
        {
            
        }
            if(a[j]<min)
            {
                temp;
                min=temp;
            }
    }
        if(i!=min)
        {
            a[i]=min;
        }
        printf(" ");
    }
