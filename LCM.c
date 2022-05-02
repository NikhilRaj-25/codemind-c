#include<stdio.h>
int main()
{
	int a,b,i,c,count=0;
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i++)
	{
		c=a*i;
		if(c%b==0)
		{
			printf("%d",c);
			break;
		}
		count++;
	}
}