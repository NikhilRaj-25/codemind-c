#include<stdio.h>
int main()
{
    int a,b,i,j,count;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        count=0;
        b=arr[i];
        for(j=0;j<a;j++)
        {
            if(b>arr[j])
            {
                count++;
            }
        }
        printf("%d ",count);
    }
    return 0;
}