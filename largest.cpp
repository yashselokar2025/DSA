#include<stdio.h>
int check(int,int,int);
int main()
{
	int a,b,c;
	printf("Enter the numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	printf("The largest number is :%d",check(a,b,c));
}
int check(int a,int b,int c)
{
	if(a>b || a>c)
	{
		return a;
	}
	else if(b>a || b>c)
	{
		return b;
	}
	else(c>a || c>b);
	{
		return c;
	}
}
