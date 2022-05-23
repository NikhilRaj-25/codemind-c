#include<stdio.h>
int main()
{
    int a,i,b=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        if(arr[i]!=0 && arr[i]!=1)
        {
            b++;
            break;
        }
    }
    if(b==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}