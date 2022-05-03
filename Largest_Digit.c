#include<stdio.h>
int main()
{
    int a,rem=0,b;
    scanf("%d",&a);
    b=0;
    while(a!=0)
    {
        rem=a%10;
        if(b<rem)
        {
            b=rem;
        }
        a=a/10;
    }
    printf("%d",b);
}