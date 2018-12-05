#include<stdio.h>
int main()
{
	int mat,phy,chem,total,x;
	printf("enter the marks in maths , physics and chemistry : ");
	scanf("%d%d%d",&mat,&phy,&chem);
	total=mat+phy+chem;
	x=phy+chem;
	printf("total = %d",total);
	printf("\ntotal of phy and chem = %d",x);
	if(mat>=65&&phy>=55&&chem>=50)
	{
	
		if(total>=180&&x>=140)
			{
				printf("\nELIGIBLE");
			}
			else
			{
				printf("\nNOT ELIGIBLE");
			}
	}
	else
	{
		printf("\nNOT ELIGIBLE");	
	}
}
