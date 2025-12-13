#include<stdio.h>
int square(int);
int main()
{
	int a;
	printf("Enter the number : ");
	scanf("%d",&a);
	printf("The square of given number is %d",square(a));
}
int square(int a)
{
	return a*a;

}

