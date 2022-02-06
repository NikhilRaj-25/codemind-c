#include<stdio.h>
int main()
{
    int a,sum,j,i;
    scanf("%d",&a);
    int arr[a];
    for(i=1;i<=a;i++)
    {
        sum=0;
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i]);
            sum=sum+arr[i];
        }
        printf("%d
",sum);
    }
    return 0;
}