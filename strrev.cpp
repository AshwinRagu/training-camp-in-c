#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50];
	printf("enter the string : ");
	scanf("%s",str1);
	strrev(str1);
	printf("the reversed string is %s",str1);
}
