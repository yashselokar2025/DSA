#include<stdio.h>
int main(){
    int a,i,r,j,y,t,v,u,k,g,z;
    printf("Enter a number to check it is a palindrome number or not \n");
    scanf("%d",&a);
    a = y;
    for( i=0;a>0;i++)
    {
        r=a%10;
        
	
    }
    for(z=0;a>0 & a<10;z++)  
		{
			v = r;
			a=a/10;
		} 
	for(j=0;a>=99 & a<1000;j++)
		{
			t = r;
		}
	for(k=0;a>=9 & a<100;k++)
		{
			u = r;
			a=a/10;
		

		}     
    g = t*100 + u*10 + v*1;
	printf("The number is %d \n",g);
	if(g = y)
	{
		printf("The number is a palindrome number ");
	}
	else
	{
		printf("The number is not a palindrome number ");
	}
 return 0;   
}
