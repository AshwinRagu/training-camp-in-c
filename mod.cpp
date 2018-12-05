#include<stdio.h>
int main()
{
	int a,mul=1;
	printf("enter the number : ");
	scanf("%d",&a);
	while(a!=0)
	{
		mul=mul*a%10;
		a=a/10;
	}
	printf("multiply of digits : %d",mul);
}
