#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number : ");
	scanf("%d",&a);
	
	if(a<1)
	{
		printf("Not Prime number :");
		
	}
	else if(a%2==0)
	{
		printf("Not Prime number");
	}
	else
	{
		printf("Prime number");
	}
	return 0;
}
