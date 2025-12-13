#include<stdio.h>
int main()
{	
	int i,r=0,sum=0,t;
	for( i=0;i<1000;i++)
	{	for(i=t;i>0;i=i/10)
		{
			r = t%10;
			r = r*r*r;
			sum = sum + r ;
		
			if(sum == i)
			{
				printf("The List of the armstrong number up to 1000 is : %d\n ",sum);	
			}
		}
	
	}
	return 0;	
}
