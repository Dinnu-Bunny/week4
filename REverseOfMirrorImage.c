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
	return 0;
}
