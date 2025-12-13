#include<stdio.h>
int main()
{
	int i,j,n,t,v;
	printf("Enter the number of digits ")
	scanf("%d",&n);
	t=n/2;
	v=n/2+1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==3 || j==3)
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
}

