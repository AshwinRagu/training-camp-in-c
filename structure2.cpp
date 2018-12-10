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
	
	int a;
	printf("\n Enter the ROLLNO to get record : ");
	scanf("%d",&a);
	for(int i=0;i<3;i++)
	{
		if(a==s[i].rollno)
		{
			printf("\n\nROLL_NO : %d\nNAME : %s\nADDRESS : %s\nAGE : %d",s[i].rollno,s[i].name,s[i].address,s[i].age);	
		}
	}
	
}
