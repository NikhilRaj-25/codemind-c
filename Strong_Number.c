#include<stdio.h>
int main()
{
	int a,i,fact=1,temp,sum=0,rem;
	scanf("%d",&a);
	temp=a;
	while(a!=0)
	{
		fact=1;
		rem=a%10;
		for(i=1;i<=rem;i++)
		{	
		fact = fact*i;
		}
		sum=sum+fact;
		a=a/10;
	}
	if(temp==sum)
	{
		printf("The number %d is a strong number",temp);
	}
	else
	{
		printf("The number %d is not a strong number",temp);
	}
	return 0;
}