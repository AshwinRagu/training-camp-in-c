#include<stdio.h>
int main()
{
	int a,sum=0;
	printf("enter the number : ");
	scanf("%d",&a);
	while(a!=0)
	{
		sum=sum+a%10;
		a=a/10;
	}
	printf(" sum of digits : %d",sum);
}
