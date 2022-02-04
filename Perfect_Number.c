#include<stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);//n=6
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)//6%3=0==0
		{
			sum=sum+i;//12
		}
	}
	if(n==sum)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}