#include<stdio.h>
int main()
{
	int n,fact=1;
	printf("Enter number = ");
	scanf("%d",&n);
	if(n<=7)
	{
		for(int i=n;i>0;i--)
		{
			fact=fact*i;
		}
		printf(" %d! = %d\n",n,fact);
		
	}
	
}
