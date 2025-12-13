#include<stdio.h>
int main()
{	
	int i,a,r=0,sum=0,t,isarm,j;
	printf("Enter the number : ");
	scanf("%d",&a);
	t = a;
	for( i=100;i<=a;i++)
	{
		isarm=1;
		
		{
			r = i%10;
			r = r*r*r;
			i = i/10;
			sum = sum + r ;
			if(sum == t)
			{
				printf("The List of the armstrong number up to %d is %d\n ",t,sum);
				break;
				
			}
		
		
			else
			{
				isarm=0;
			
			}
	
		}	
	}
	
	return 0;
	
}
