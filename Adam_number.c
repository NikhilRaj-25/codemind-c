#include<stdio.h>
int main()
{
	int sums=0,d,c,a,b,rems=0,rem=0,i,sum=0;
	scanf("%d",&a);
	b=a;
	c=a*a;
	while(b>0)
	{
		rem = b % 10;
		sum = sum*10+rem;
		b = b / 10;		
	}
	d=sum*sum;
	while(d>0)
	{
		rems=d%10;
		sums=sums*10+rems;
		d=d/10;
	}
	if(c==sums)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}