#include<stdio.h>
int main()
{
	int a,b,x,i,l,flag=0;
	printf("enter two number : ");
	scanf("%d%d",&a,&b);
	for(i=a+1;i<b;i++)	
	{
	for(l=i;l<=i/2;++l)
	{
		if(i%l==0)
		{
		flag=1;
		}
		if(flag==0)
		{
			x=i;
		}
    }

		
	 for(int j=1;j<=b;j++)
	 {
	 	for(int k=1;k<=j;k++)
	 	 {
	 		printf("%d",x);
		 }
		 printf("\n");
	 }
	}
}
