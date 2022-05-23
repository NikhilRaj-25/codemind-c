#include<stdio.h>
int main()
{
    int a,i,j,sum=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        int b=0;
        if(arr[i]%2==0)
        {
            for(j=i+1;j<a;j++)
            {
                if(arr[i]==arr[j])
                {
                    b=1;
                    break;
                }
            }
            if(b==0)
            {
                sum+=arr[i];
            }
        }
    }
    printf("%d",sum);
}