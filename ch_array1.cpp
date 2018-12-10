#include<stdio.h>
int main()
{
	char str[50];
	printf("Enter the string : ");
	scanf("%[^!]",str);
	printf("%s",str);
}
