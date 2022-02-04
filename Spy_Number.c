#include<stdio.h>
int main()
{
	int rem,a,i,sum=0,product=1;
	scanf("%d",&a);
	while(a!=0)
	{
		rem=a%10;
        product=product*rem;
        sum=sum+rem;
        a=a/10;
	}
	if(sum==product)
	{
		printf("Spy Number");
	}
	else
	{
		printf("Not Spy Number");
	}
	return 0;
}