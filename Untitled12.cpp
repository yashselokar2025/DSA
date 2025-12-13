#include<stdio.h>
int main()
{
	int a,i,c=0;
	printf("Enter the number:");
	scanf("%d",&a);
    
	for(i=0;a>0;i++)
	{
		a =a/10;
		c++;
		 }
	printf("Total number of digits in given number : %d ",c);
	return 0;
		  	
}
