#include<stdio.h>
int sum()
{
	int a,b,c;
	printf("Enter the values of a and b :  ");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("c : %d",c);
}
int main()
{
	sum();
}
