#include<stdio.h>
int main()
{
    int i,count=1;
    char str[100];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    printf("%d",count);
}