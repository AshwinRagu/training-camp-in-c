#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],str1[20];
	printf("enter the string : ");
	scanf("%s",str);
	strcpy(str1,str);
	printf("the copied string is %s",str1);
}
