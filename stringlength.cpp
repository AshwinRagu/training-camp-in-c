#include<stdio.h>
int main()
{
	char a[20];
	int i=0,n;
	printf("Enter the string : ");
	scanf("%s",a);
	while(a[i]!='\0')
	{
		i++;
	}
	printf("the length of string %s is %d ",a,i);
}
