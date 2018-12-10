#include<stdio.h>
int main()
{
	int *ptr;
	int x;
	printf("Enter the value : ");
	scanf("%d",&x);
    ptr = &x;
	printf("ptr = %d\n",ptr);
	printf("address of x = %d",&x);
	printf("\naddress of ptr = %d",&ptr);
	printf("\n*ptr = %d\n",++*(&x));
	//printf("&ptr = %d\n",&ptr);
	//printf("%d",*ptr);
	/*printf("%d",&ptr);
	printf("%d",&ptr);
	printf("%d",&ptr);*/
	
}
