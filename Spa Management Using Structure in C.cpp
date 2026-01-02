#include<stdio.h>
struct spa{
	char name[20];
	int fees;
	int hour;
};
int main()
{
	struct spa s1 = {"BodyMassage",200,2};
	printf("Name:%s\nFees:%d\nHour:%d",s1.name,s1.fees,s1.hour);
	return 0;

}
