#include<stdio.h>
void prime()
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
}
int main()
{
	prime();
	return 0;
}
