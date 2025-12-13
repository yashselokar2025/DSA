#include<stdio.h>
int main()
{
	int i,j,k;
	for(int i=4;i>1;i--)
	{
		for(j=1;j<=4-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			if(k==1 || k==2*i-1 || i==4)
    		{
    			printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			if(k==1 || k==2*i-1 || i==4)
    		{
    			printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
	
		
	return 0;
}

