#include<stdio.h>
int main()
{
	int i,s,count=0;
	scanf("%d",&s);
	int arr[s];
	for(i=0;i<s;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<s;i++)
	{
		int x=arr[i];
		if(x%2==0)
		{
			if(i%2!=0)
			{
				printf("False");
				return 0;
			}
		}
	}
	printf("True");
}