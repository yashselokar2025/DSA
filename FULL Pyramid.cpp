#include<stdio.h>
int main()
{
	int i,k,j;
	for(int i=1; i<=4; i++) 
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
    
}
for(int i=1; i<=n; i++) {
    for(int j=1; j<=n-i; j++) printf("  ");
    for(int k=1; k<=2*i-1; k++) {
        if(k==1 || k==2*i-1 || i==n) printf("* ");
        else printf("  ");
    }
    printf("\n");
}
