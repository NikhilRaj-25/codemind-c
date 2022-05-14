#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(i==j)
            {
                sum+=arr[i][j];
            }
        }
    }
    for(i=0,j=b-1;i<a,j>=0;i++,j--)
    {
        if(i==j)
        {
            continue;
        }
        else
        {
            sum+=arr[i][j];
        }
    }
    printf("%d",sum);
}