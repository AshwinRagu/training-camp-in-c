#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nenter the values of matrix a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	if((a[0][1]==0)&&(a[0][2]==0)&&(a[1][2]==0))
	{
		printf("YES it is lower triangle\n");
	}
	else
	{
		printf("NO\n");
	}
	
}
