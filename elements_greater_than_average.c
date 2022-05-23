#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    float avg,sum=0;
    for(i=0;i<a;i++)
    {
        sum+=arr[i];
    }
    avg=sum/a;
    int count=0;
    for(i=0;i<a;i++)
    {
        if(arr[i]>=avg-0.5)
        {
            count++;
        }
    }
    printf("%d",count);
}