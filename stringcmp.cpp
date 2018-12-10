#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	int count=1,len;
	printf("enter the string 1 : ");
	scanf("%s",a);
	len=strlen(a);
	printf("enter the string 2 : ");
	scanf("%s",b);
	for(int i=0;i<20;i++)
	{
	
	if(a[i]==b[i])
		count+=1;
	}
if(count==len)                                   
{
	printf("the strings are equal ..!");
}
else
	printf("the strings are not equal ..!");

}
