#include<stdio.h>
int main()
{
	int i,j,n=4,s=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i+1;j++)
		printf("%d ",s++);
		printf("\n");
	}
	return 0;
}
