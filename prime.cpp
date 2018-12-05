#include<stdio.h>
int main()
{
	int i,a,flag=0;
	printf("enter the number : ");
	scanf("%d",&a);
	for(i=2;i<=a/2;++i)
	{
		if(a%i==0)
		{
		flag=1;
		break;
	    }
    }
			if(a==1)
				{
					printf("\n1 is not a prime or composite number");
				}
			else if(flag==0)
				{
					printf("\n%d is a prime number",a);
				}	
			else
				{
					printf("\n%d is not a prime number",a);
				}
	
	}

