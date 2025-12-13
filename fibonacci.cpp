#include<stdio.h>
int main()
{
	int a1,a2,a3,n,i;
	printf("Enter the range for fibonnacci series ");
	scanf("%d",&n);
	a1=0;
	a2=1;
	printf("The fibonacci series for the range is 0\n");
	printf("The fibonacci series for the range is 1\n");
	a3 = a1 + a2  ;
	while(a3<n)
	{	printf("The fibonacci series for the range %d is %d\n",n,a3);
		a1=a2;
		a2=a3;
		a3=a1+a2;
		
	}
	
	return 0;
}
