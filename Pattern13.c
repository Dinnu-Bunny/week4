#include<stdio.h>
int main()
{
	int i,j,s=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(i%2!=0)
			{
				if (j==7)
				{
					printf("%d",++s);
					printf("\n");
					
				}
				if(j!=7)
				printf("%d",s);
				
		    }
		    
		    
		    
		    
		    else if(i%2==0)
		    {
				
		    	if(j==1)
		    	printf("%d",s+1);
		    	else if(j!=1)
			    {	printf("%d",s);
					if (j==7)
			    	{
					printf("\n");
					s=s+1;
					}
				}
		    	
			}
		
		}
	}
	return 0;
}
