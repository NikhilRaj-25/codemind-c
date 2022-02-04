#include <stdio.h>
int main()
{
    int n,i,j,a=0,count=0;
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        int count = 0;
        for ( j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 9)
        {
            a++;
            printf("%d ",j-1);
        }
    }
    printf("
Total=%d",  a);

    return 0;
}