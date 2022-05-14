#include<stdio.h>
int main()
{
    int a,j,i;
    scanf("%d",&a);
    int arr[a][a],brr[a][a],ans[a][a];
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            ans[i][j]=arr[i][j]+brr[i][j];
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(i==a-1 && j==a-1)
            {
                printf("%d",ans[i][j]);
            }
            else if(j==a-1)
            {
                printf("%d",ans[i][j]);
            }
            else
            {
                printf("%d ",ans[i][j]);
            }
        }
        printf("
");
    }
}