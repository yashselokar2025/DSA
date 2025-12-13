#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=3;j<=7;j++)
		{
			if(i==5 || j==3)
			{
				printf(" *");
			}
			else
			{
				
				printf(" ");
				
			}
		}
		printf("\n");	
}
}

