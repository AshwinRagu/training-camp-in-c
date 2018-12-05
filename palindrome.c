#include<stdio.h>
int main()
{
	int inc=1,i;
	char name[100]="madam";
	char na[100]="mada";
	for(i=0;i<100;i++)
	{
		if(na[i]==name[i])
		{
			inc++;
		}
	}
	int len=strlen(name);
	printf("%d",len);
	if(strcmp(name,na)==0)
	{
		printf("\nPalindrome");
	}
	else
	{
		printf("\nNot Palindrome");
	}
}
