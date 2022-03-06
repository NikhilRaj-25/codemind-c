#include<stdio.h>
int main()
{
    int a,b,sum,rem,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        sum=0;
        rem=0;
        b=arr[i];
        while(b!=0)
        {
            sum=b%10;
            rem=rem*10+sum;
            b=b/10;
        }
        if(rem==arr[i])
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}