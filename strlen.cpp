#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int n;
	printf("enter the string : ");
	gets(str);
	n= strlen(str);
	printf("the length of given string %s is : %d",str,n);	
}
