#include<stdio.h>
int main()
{
	int i,n=5,j;
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=i;j++)
	printf("*");
	printf("\n");
    }
    for(i=1;i<=n;i++)
    {
	for(j=1;j<=n-i+1;j++)
		printf("*");
		printf("\n");
    }
    return 0;
}
