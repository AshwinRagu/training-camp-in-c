#include<stdio.h>
int main()
{
	int x,y,z,*a,*b;
	printf("Enter the numbers x and y : ");
	scanf("%d%d",&x,&y);
	a=&x;
	b=&y;
	z=*a+*b;
	printf("\nsum : %d",z);
	printf("\nsub : %d",*a-*b);
	printf("\nmul : %d",*a * *b);
	printf("\ndiv : %d",*a / *b);	
}

