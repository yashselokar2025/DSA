#include<stdio.h>
int main()
{
	int a,n=1,i;
	printf("Enter the factorial number to  calculate : ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		n = n*i;
		
	}
	printf(" %d",n);
	return 0;
}
