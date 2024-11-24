#include<stdio.h>
int main()
{
	int i,j,n=4,s=3;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("%d",s);
	    }
        s=s+1;
		printf("\n");
	}
	s=6;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i+1;j++)
		{
			printf("%d",s);
		}
		s=s-1;
		printf("\n");
	}
	return 0;
}
