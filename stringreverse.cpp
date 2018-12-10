#include<stdio.h>
int main()
{
	char s[20],s1[20];
	int i=0,j=0,n;
	printf("Enter the string : ");
	scanf("%s",s);
	while(s[i]!='\0')
	{
		i++;
	}
	n=i-1;
	for(i=n;i>=0;i--)
	{
		s1[j]=s[i];
		j++;
	}
		printf("the reversed string is : %s",s1);
}
