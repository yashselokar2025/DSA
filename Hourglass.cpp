#include<stdio.h>
int main()
{
	int i,k,j;
	for(int i=3; i>1; i--) 
    {
    	for(int j=1; j<=4-i; j++) 
		{
			printf("  ");
		}
    	for(int k=1; k<=2*i-1; k++)
		{
			printf("* ");
		 }
    	printf("\n");
		}
		

	for(i=1; i<=3; i++) 
    {
    	for(j=1; j<=4-i; j++) 
		{
			printf("  ");
		}
    	for(k=1; k<=2*i-1; k++)
		{
			printf("* ");
		 }
    	printf("\n");
		}
		
	return 0;	
}
