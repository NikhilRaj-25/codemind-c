#include<stdio.h>
int main()
{
    int i,count=0;
    char str[100];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        count++;
    }
    printf("%d",count);
}