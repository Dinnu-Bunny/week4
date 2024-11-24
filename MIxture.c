#include<stdio.h>
int main()
{
	int i,j,n=5,s;
	for(i=1;i<=n;i++)
	{
	{
		
		for(s=1;s<=i-1;s++)
		printf(" ");
	}
	{
		for(j=1;j<=2*(n-i)+1;j++)
		printf("*");
		printf("\n");
	}
}
	return 0;
}
