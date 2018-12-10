#include<stdio.h>
int sum(int n)
{	
	int s=0;
	while(n>0)
	{
	s=s+n;
	n--;
	//sum(n);
	}
	return s;
}
int main()
{
	int n,s=0,l;
	printf("enter value of n : ");
	scanf("%d",&n);
	l=sum(n);
	printf("%d",l);
}
