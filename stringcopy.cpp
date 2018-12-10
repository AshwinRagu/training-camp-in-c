#include<stdio.h>
int main()
{
	char s1[20],s2[20];
	int i=0;
	printf("Enter the string : ");
	scanf("%s",s1);
	while(s1[i]!='\0')
	{
		s2[i]=s1[i];
		i++;
	}
	printf("The copied string is : %s",s2);
}
