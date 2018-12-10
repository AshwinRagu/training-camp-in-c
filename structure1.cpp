#include<stdio.h>
struct student{
	int rollno;
	char name[20];
	char address[20];
	int age,i;
}s[10];
int main()
{
	for(int i=0;i<3;i++)
	{
	printf("\nEnter the rollno : ");
	scanf("%d",&s[i].rollno);
	printf("\nEnter the name : ");
	scanf("%s",s[i].name);
	printf("\nEnter the address : ");
	scanf("%s",s[i].address);
	printf("\nEnter the age no : ");
	scanf("%d",&s[i].age);
	}
	for(int j=0;j<3;j++)
	{
		printf("\n\nROLL_NO : %d\nNAME : %s\nADDRESS : %s\nAGE : %d",s[j].rollno,s[j].name,s[j].address,s[j].age);
	
	}
}
