#include<stdio.h>
int main()
{
    int a,b,i,product=1,j;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
    	product=1;
    	for(j=arr[i];j>0;j--)
    	{
    		product = product * j;
		}
		printf("%d
",product);
	}
    return 0;
}