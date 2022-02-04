#include<stdio.h>
int main()
{
	int a,b,i,rem=0,sum=0;
	scanf("%d",&a);
	b=a;
	while(b>0)
	{
		rem = b % 10;
		sum = sum + rem;
		b = b / 10;
	}
	if(a%sum==0)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}