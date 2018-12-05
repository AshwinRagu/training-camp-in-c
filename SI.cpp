#include<stdio.h>
int main()
{
    float p,n,r,s;
	float si;
	printf("enter the principle amount : ");
	scanf("%f",&p);
	printf("enter the time : ");
	scanf("%f",&n);
	printf("enter the rate : ");
	scanf("%f",&r);
	si=(p*n*r)/100;
	printf("SI = %f",si);
}
