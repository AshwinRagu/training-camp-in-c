#include<stdio.h>
int main()
{
	int a,b,x,i;
	printf("enter two number : ");
	scanf("%d%d",&a,&b);
	for(i=a+1;i<b;i++)	
	{
		x=i*i;
		printf(" \nthe square of number between %d and %d, %d is  %d\n",a,b,i,x);
	}
}
