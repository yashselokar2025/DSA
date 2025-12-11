#include<stdio.h>
int main()
{
	int r,t,y;
	printf("Enter the radius of circle");
	scanf("%d",&r);
	t = 2*(355/113)*r;
	y = (355/113)*r*r;
	printf("The circumference of circle is %d\n",y);
	printf("The area of circle is %d \n",t);
	return 0;
	
}
