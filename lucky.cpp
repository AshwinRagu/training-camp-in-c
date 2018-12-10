#include<stdio.h>
#define ll long long
int main()
{
	int x,y,a[100],n;
	a[0]=3;
	a[1]=4;
	ll pos=2;
	printf("\nEnter the number = ");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		ll x=a[i]*10+3;
		ll y=a[i]*10+4;
		a[pos++]=x;
		a[pos++]=y;
	}
	printf("\nThe lucky number is %d",a[n-1]);
}
