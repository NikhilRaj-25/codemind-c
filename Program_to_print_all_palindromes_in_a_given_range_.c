#include<stdio.h>
int palindrome(int a)
{
    int rev=0,sum=0,b;
    while(a>0)
    {
        rev=a%10;
        sum=sum*10+rev;
        a=a/10;
    }
    return sum;
}
int main()
{
    int a,b,c,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        c=palindrome(i);
        if(c==i)
        {
            printf("%d ",i);
        }
    }
    return 0;
}