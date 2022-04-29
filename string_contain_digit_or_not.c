#include<stdio.h>
int main()
{
    int i,count=0;
    char str[100];
        count=0;
        scanf("%s",str);
        for(i=0;str[i]!=NULL;i++)
        {
            if(str[i]>='0' && str[i]<='9')
            {
                count++;
            }
        }
        if(count>0)
        {
            printf("Contains %d digit",count);
        }
        else if(count==0)
        {
          printf("Doesn't contain digit");
        }
}