#include<stdio.h>
int main()
{
    int a,b,c,i,j;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int s=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(i==j || i+j==a-1)
            {
                s+=arr[i][j];
            }
        }
    }
    printf("%d",s);
}