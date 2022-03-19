#include<stdio.h>
int main()
{
    int a,b=0,i,j;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        int count=0;
        for(j=0;j<a;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("%d ",arr[i]);
            b++;
        }
    }
    if(b==0)
    {
        printf("-1");
    }
}