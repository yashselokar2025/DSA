#include<stdio.h>
int sum(int,int);
int main()
{
	int x,y;
	printf("Enter the First number : \n");
	scanf("%d",&x);
	
	printf("Enter the Second number : \n");
	scanf("%d",&y);
	printf("The addition of two number according to given condition is %d",sum(x,y));
	return 0;
}
int sum(int a,int b)
{
	return a+b;

}

