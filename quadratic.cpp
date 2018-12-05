#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,b1,s,s2;
	
	float q,q1,s1;
	printf("enter the values of a,b and c : ");
	scanf("%d%d%d",&a,&b,&c);
	b1=b*b;
	s=b1-(4*a*c);
	s1=sqrt(s);
	q=(-b+s1)/(2*a);
	q1=(-b-s1)/(2*a);
	printf("REAL :%f",q);
	printf("\nIMAGINARY : %fi",q1);
	
}
