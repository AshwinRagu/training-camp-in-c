#include<stdio.h>
int main()
{
	int i,x,y,a,flag=0,n;
	printf("enter the number : ");
	scanf("%d%d",&x,&y);
	//for(i=x+1;i<y;i++)
	while(i<y)
	{
		i=x+1;
	for(int j=2;j<=i/2;++j)
	{
		if(i%j==0)
		{
		flag=1;
		break;
	    }
    
			 if(flag==0)
				{
					n=i;
					printf("%d\n",n);
			
	}
	}
	i++;
}
}
