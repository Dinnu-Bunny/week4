#include<stdio.h>
int main()
{
	int i=1,N;
	printf("The value of N is");
	scanf("%d",&N);
	while(i<=10)
{
    printf("%d*%d=%d",i,N,i*N);
    i++;
}
    return 0;
	
}
