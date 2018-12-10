#include<stdio.h>
int coin()
{
	int a[5],b[5],count=0,i,j,k,x;
	for(int i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the exact cost : ");
	scanf("%d",&x);
	for(i=0;i<3;i++)
	{	
		for(j=0;j<3;j++)
		{
		 
		b[i]=a[i];
		if(a[i]==x)
			{
			for(k=0;k<3;k++)
				{
				printf("%d+\t",b[k]);
				}
			
			}	
		}
		printf("\n");
	}
}
int main()
{
	coin();
}
