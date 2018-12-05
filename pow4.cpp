#include<stdio.h>
#include<math.h>
int main()
{
	int n,a=0,x;
    printf("INPUT : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    	x=pow(i,4);
    	a=a+x;
	}
	printf("output : %d",a);
}
