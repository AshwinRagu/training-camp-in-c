#include<stdio.h>
int main()
{
	int count,a[10],i,j,f[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;j<10;j++)
	{
		f[i]=-1;
	}
	for(i=0;i<10;i++)
	{
		count=1;
		for(j=i+1;j<10;j++)
		{
			if(a[i]==a[j])
			{
				count+=1;
				f[j]=0;
			}
		}
		if(f[i]!=0)
		{
			f[i]=count;
			printf("\n%d : %d",a[i],f[i]);
		}
	}
	
}
