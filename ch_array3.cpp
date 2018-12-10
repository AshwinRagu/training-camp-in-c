#include<stdio.h>
int main()
{
	char s[20],s1[20],s2[20],s3[20],s4[20],s5[20];
	printf("\nenter the string  : ");
	scanf(">>%s<<\n",s);
	printf("\nenter the string  : ");
	scanf(">>%20s<<\n",s1);
	printf("\nenter the string  : ");
	scanf(">>%-20s<<\n",s2);
	printf("\nenter the string  : ");
	scanf(">>%-.4s<<\n",s3);
	printf("\nenter the string  : ");
	scanf(">>%20.4s<<\n",s4);
	printf("\nenter the string  : ");
	scanf(">>%-20.4s<<\n",s5);
	printf("s : %s\ns1 : %s1\ns2 : %s\ns3 : %s\ns4 : %s4\ns5 : %s",s,s1,s2,s3,s4,s5);	
}
