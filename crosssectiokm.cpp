#include<stdio.h>
int main()
{
	int i,j,k;
	for(int i=4; i>=1; i--) 
	{	
    	for(int j=1; j<=4-i; j++)
		{
			 printf("  ");
		 } 
    	for(int k=1; k<=2*i-1; k++) 
		{
        	if(k==1||k==2*i-1)
			{
				 printf("* ");
			}
        	else
			{
				printf("  ");
			}
    }
    printf("\n");
	}
}

