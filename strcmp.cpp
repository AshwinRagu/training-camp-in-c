#include<stdio.h>
#include<string.h>
int main()
{
	char str[10],str1[10];
	printf("enter the strings : ");
	scanf("%s%s",str,str1);
	if(strcmp(str,str1)==0)
		printf("both strings are equal\n");
	else
	    printf("strings are not equal\n");
}
