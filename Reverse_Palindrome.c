#include<stdio.h>
int reverse(int a)
{
    int r,rev=0,rev1=0,i,ans,dup;
    i=a;
    while(a>0)
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    ans=rev+i;
    dup=ans;
    while(ans>0)
    {
    	r=ans%10;
    	rev1=rev1*10+r;
    	ans=ans/10;
	}
	if(dup==rev1)
	{
		return rev1;
	}
	else
	{
		reverse(dup);
	}
}
int main()
{
    int a,total;
    scanf("%d",&a);
	total=reverse(a);
	printf("%d",total);
}