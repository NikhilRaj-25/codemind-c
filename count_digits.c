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
    int x,count=0;
    for(i=0;i<a;i++)
    {
        int r;
        count=0;
        x=arr[i];
        if(x==0)
        {
            count++;
        }
        else
        {
            while(x)
            {
                r=x%10;
                x=x/10;
                count++;
            }
        }
        printf("%d ",count);
    }
}