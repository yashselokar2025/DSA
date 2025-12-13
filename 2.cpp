#include<stdio.h>
int main()
{
	int i,a,r=0,sum=0;
	printf("Enter the number : ");
	scanf("%d",&a);
	printf("The reverse number of the given number is : ");
	
	for( i=0;a>0;i++)
	{
		r = a%10;
		a = a/10;
	
	    printf("%d",r);
		sum = sum + r ;

	}
	printf("The sum of digit of  given number or reverse number is %d\n",sum);
	
	return 0;
	
}
