#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
  	int arr[n],result;
  	for(i=0;i<n;i++)
	  	{
	  		scanf("%d",&arr[i]);
		}
	result=arr[0];
  	for (i=1; i < n; i ++)
		{
	    result ^= arr[i];
	  	}
  	printf("%d ",result);
    return 0;
}