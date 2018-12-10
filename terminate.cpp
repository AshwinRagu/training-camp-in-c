#include<stdio.h>
int main()
{
	int a,x=0;
	for(int i=0;;i++)
	{
	scanf(" %d",&a);
	if(x<a)
	{
		x=a;
	}
	if(a==-1)
		{
			printf("largest number : %d",x);
			break;
		}
	}
}
