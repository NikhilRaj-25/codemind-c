#include<stdio.h>
int main()
{
    int a,sum=0,product=1,rem;
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;
        product=product*rem;
        sum=sum+rem;
        a=a/10;
    }
    printf("%d",(product-sum));
}