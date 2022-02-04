#include<stdio.h>
int main()
{
	int b,rem,a,i,sum=0,product=1;
	scanf("%d",&a);
	b=a*a;
	while(b!=0)
	{
		rem=b%10;
        sum=sum+rem;
        b=b/10;
	}
	if(a==sum)
	{
		printf("Neon Number");
	}
	else
	{
		printf("Not Neon Number");
	}
	return 0;
}