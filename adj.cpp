#include<stdio.h>
int main()
{
	int i,j=0;
	char a[100],ch;
	for(i=65;i<=91;i++)
	{
		a[j]=i;
		j+=1;
	}
	printf("Enter a character : ");
	scanf("%c",&ch);
	for(i=0;i<26;i++)
	{
	 if(ch==a[i])
	 {
	 	printf("The adjacent characters of the given character %c is : %c %c\n",ch,a[i-1],a[i+1]);
	 }
	}
}
