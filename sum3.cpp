#include<stdio.h>
int sum(int x,int y)
{
	int s;
	printf("enter the values : ");
	scanf("%d%d",&x,&y);
	printf(" s : %d",s=x+y);
}
int main()
{
	int a,b;
	sum(a,b);
	return 1;
}
