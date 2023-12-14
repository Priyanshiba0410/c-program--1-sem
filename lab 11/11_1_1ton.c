#include<stdio.h>
void main()
{
	int i,n;
	printf("enter a number: ");
	scanf("%d",&n);
	for (i = n-1; i>0; i--)
	{
		printf("%d\n",i);
	}
}