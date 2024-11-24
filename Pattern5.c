#include<stdio.h>
int main()
{
	int i,j,n=5,s;
	for(i=0;i<n;i++)
	{
	{
		for(s=0;s<=i;s++)
		printf(" ");
	}
	{
		for(j=1;j<=n-i;j++)
		printf("*");
		printf("\n");
	}
    }
    for(i=0;i<n;i++)
	{
	{
		
		for(s=0;s<=n-1-i;s++)
		printf(" ");
	}
	{
		for(j=1;j<=i+1;j++)
		printf("*");
		printf("\n");
    }
    }
	return 0;
}
