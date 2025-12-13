#include<stdio.h>
int add(int,int)
{
	int x,y,sum;
	printf("Enter the First number : \n");
	scanf("%d",&x);
	
	printf("Enter the Second number : \n");
	scanf("%d",&y);
	sum = x + y;
	printf("The addition of two number according to given condition is %d",sum);
	return 0;
}
int sub(int,int)
{
	int x,y,sum;
	printf("Enter the First number : \n");
	scanf("%d",&x);
	
	printf("Enter the Second number : \n");
	scanf("%d",&y);
	sum = x - y;
	printf("The addition of two number according to given condition is %d",sum);
	return 0;
	
}
int fact(int)
{
	int a,n=1,i;
	printf("Enter the factorial number to  calculate : ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		n = n*i;
		
	}
	printf(" %d",n);
	return 0;
}
int prime(int)
{
	int a;
	printf("Enter the number : ");
	scanf("%d",&a);
	
	if(a<1)
	{
		printf("Not Prime number :");
		
	}
	else if(a%2==0)
	{
		printf("Not Prime number");
	}
	else
	{
		printf("Prime number");
	}
	return 0;
}
int mul(int,int)
{
	int a;
	printf("Enter the number ")
}
int main()
{
	printf("+++++++++++++++++++MENU+++++++++++++++++++\n");
	printf("1.ADD\n2.SUB\n3.Factorial\n4.To Check Prime\n5.MULTIPLICATION\n\n\n");
	
	int choice;
	printf("Enter your choice : \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			add(0,0);
			break;
			
		case 2:
			sub(0,0);
			break;
		
		case 3:
			fact(0);
			break;
		case 4:
			prime(0);
			break;
		case 5;
			mul	
				
		default:
			printf("Invalid Choice");
	}
}

