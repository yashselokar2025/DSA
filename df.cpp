#include<stdio.h>
int main()
{
	int i,n,j,temp;
	printf("Enter the number : ");
	scanf("%d",&n);

	for( i=2; i<=n; i++){
		temp=1;
		for(j=2;j<i;j++)
		{
			if(i%j == 0)
			{
				t = 0;
				break;
			}
		}
		if(temp == 1)
		{
			printf("%d\n",i);	
		}
		
	}
    return 0;
}
