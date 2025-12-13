#include<stdio.h>
int main()
{
	int i,a,r=0,sum=0,t;
	printf("Enter the number : ");
	scanf("%d",&a);
	t = a;
	for( i=0;a>0;i++)
	{
		r = a%10;
		r = r*r*r;
		a = a/10;
	    
		sum = sum + r ;

	}
	printf("The armstrong number method conclusion is %d\n",sum);
	if(sum == t)
	{
		printf("The given number is the armstrong number");
	
    }
    else
	{
		
    	printf("The given number is not the armstrong number");
    
	}
	
	return 0;
	
}
