#include<stdio.h>
int main()
{
	int a,b,c,total;
	float avg;
	printf("enter the numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	total = a+b+c;
	avg=total/3;
	printf("avg of 3 nos. : %f",avg);
}
