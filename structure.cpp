#include<stdio.h>
struct student{
	int rollno;
	char name[20];
	char address[20];
	int age;
}s;
int main()
{
	printf("\nEnter the rollno : ");
	scanf("%d",&s.rollno);
	printf("\nEnter the name : ");
	scanf("%s",s.name);
	printf("\nEnter the address : ");
	scanf("%s",s.address);
	printf("\nEnter the age no : ");
	scanf("%d",&s.age);
	printf("\nROLL_NO : %d\nNAME : %s\nADDRESS : %s\nAGE : %d",s.rollno,s.name,s.address,s.age);
}
