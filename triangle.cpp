#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter the values : ");
	scanf("%d%d%d",&a,&b,&c);
	a=a*a;
	b=b*b;
	c=c*c;
	d=a+b;
	if(d==c)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	
}
