#include<stdio.h>
int main()
{
	int a,n=1,b;
	printf("Enter the factorial number to  calculate : ");
	scanf("%d",&b);
	
	for(a=1;a<=b;a++)
	{
		n = n*a;
		
	}
	printf(" %d",n);
	return 0;
}
