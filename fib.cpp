#include<stdio.h>
int fib(int n)
{
	int a=-1,b=1,c;
	while(n>0)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
		n--;
		
	}
}
int main()
{
	int n;
	printf("Enter the value : ");
	scanf("%d",&n);
	fib(n);
}

