#include<stdio.h>
int main()
{
	int i,a[i],s,x;
	for(i=1;i<=5;i++)
	{
		printf("Enter a number = ");
		scanf("%d",&a[i]);
	}
	printf("Enter the number to be searched = ");
	scanf("%d",&s);
	for(i=1;i<=5;i++)
	{
		if(a[i]==s)
		{
			x=s;
			printf("the number %d appears in the first five number\n",s);
			
	}
	if(a[i]!=s)
	{
		printf("the number %d does not appear in the first five numbers\n",s);
			
	}
		
	}
}
