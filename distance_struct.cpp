#include<stdio.h>
struct distance
{
	float feet;
	float inch;
}d1,d2;
int get()
{
	printf("\nEnter the feet of distance 1 : ");
	scanf("%f",&d1.feet);
	printf("\nEnter the inch of distance 1 : ");
	scanf("%f",&d1.inch);
	printf("\nEnter the feet of distance 2 : ");
	scanf("%f",&d2.feet);
	printf("\nEnter the inch of distance 2 : ");
	scanf("%f",&d2.inch);
}
/*int display(float x,float y)
{
	
}*/
int main()
{
	float x,y;
	get();
	x = d1.feet + d2.feet;
	y = d1.inch + d2.inch;
	//display(x,y);
	if(y>12.0)
	{
		y=y-12.0;
		++x;
	}
	printf("sum of distances : %.1f\'  %.1f\"" ,x,y);
	return 0;
}
