#include<stdio.h>
#include<math.h>
int main()
{
	int d,count=0,sum=0,c,a,i,b,j,rem=0;
	scanf("%d",&a);
	b=a;
	c=a;
	while(b>0)
	{
		count++;
		rem=b%10;
		b=b/10;
	}
	for(i=1,j=count;i<=a,j>0;i++,j--)
	{
		rem=c%10;
		c=c/10;
		d=(pow(rem,j));
		sum=sum+d;
	}
	if(a==sum)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}