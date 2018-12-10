#include<stdio.h>
struct complex{
	int rl;
	int img;
}c1,c2;
int getdata()
{
	
	printf("\nEnter the real part of 1st complex_no : ");
	scanf("%d",&c1.rl);
	printf("\nEnter the imaginary part of 1st complex_no : ");
	scanf("%d",&c1.img);
	printf("\nEnter the real part of 2nd complex_no : ");
	scanf("%d",&c2.rl);
	printf("\nEnter the imaginary part of 2nd complex_no : ");
	scanf("%d",&c2.img);
}
int print()
{
	int x,y;
	x=c1.rl+c2.rl;
	y=c1.img+c2.img;
	printf("\nThe Real and imaginary parts of complex numbers are : %d + %di",x,y);
}
int main()
{
	getdata();
	/*int x,y;
	x=c1.rl+c2.rl;
	y=c1.img+c2.img;
	printf("\nThe Real and imaginary parts of complex numbers are : %d + %di",x,y);*/
	print();
}
