#include<stdio.h>
int main()
{
	int a,b,n;
	printf("enter the two values : ");
	scanf("%d%d",&a,&b);
	printf("\n1.ADD\n2.SUB\n3.MUL\n4.DIV\n5.exit");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
	{
		printf("%d + %d = %d\n",a,b,a+b);
		break;
	}
	case 2:
		{
			printf("%d - %d = %d\n",a,b,a-b);
			break;
		}
	case 3:
		{
			printf("%d * %d = %d\n",a,b,a*b);
			break;
		}
	case 4:
		{
			printf("%d / %d = %d\n",a,b,a/b);
			break;
		}
	case 5:
		{
			break;
		}
	
   }
}
