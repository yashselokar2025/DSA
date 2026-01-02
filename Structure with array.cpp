#include<stdio.h>
struct student{
	char Name[20];
	int roll;
	float marks;
};
int main()
{
	struct student s[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter the details of student such as name,rollno,marks\n");
		scanf("%s%d%2f",s[i].Name,&s[i].roll,&s[i].marks);
	}
	for(i=0;i<5;i++)
	{
		printf("Name: %s\nRoll no.%d\nMarks: %2f\n",s[i].Name,s[i].roll,s[i].marks);
	}
}
