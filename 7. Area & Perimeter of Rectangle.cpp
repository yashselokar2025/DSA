#include<stdio.h>
int main()
{
	int l,w,a,p;
	printf("Enter the length of the rectangle :");
	scanf("%d",&l);
	printf("Enter the width of the rectangle :");
	scanf("%d",&w);
	a = l*w;
	p = 2*(l + w);
	printf("The area of rectangle is %d \n",a);
	printf("The perimeter of rectangle is %d \n",p);
	return 0;
}
