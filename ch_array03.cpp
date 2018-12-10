#include<stdio.h>
int main()
{
	char s[20];
	printf("\nenter the string   : ");
	scanf("%s",s);
	printf("string   [>>%%s<<]      : >>%s<<\n\n",s);
	printf("string 1 [>>%%20s<<]    : >>%20s<<\n\n",s);
	printf("string 2 [>>%%-20s<<]   : >>%-20s<<\n\n",s);
	printf("string 3 [>>%%-.4s<<]   : >>%-.4s<<\n\n",s);
	printf("string 4 [>>%%20.4s<<]  : >>%20.4s<<\n\n",s);
	printf("string 5 [>>%%-20.4s<<] : >>%-20.4s<<\n\n",s);
}
