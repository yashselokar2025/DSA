#include<stdio.h>-
int main()
{
	int i,n,j,isPrime;
	printf("Enter the number : ");
	scanf("%d",&n);

	for( i=0; i<=n; i++){
		isPrime=1;
		for(j=2;j<i;j++)
		{
			if(i%j == 0)
			{
				isPrime = 0;
				break;
			}
		}
		if(isPrime == 1);
		{
			printf("%d\n",i);	
		}
		
	}
    return 0;
}
