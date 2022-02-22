#include<stdio.h>
int main()
{
	char str[100];
	int i,count,sum=0;
	scanf("%s",str);
	for (count = 0; str[count] != NULL; count++)
    {
        if ((str[count] >= '0') && (str[count] <= '9'))
        {
            sum += (str[count] - '0');
        }
    }
	printf("%d
",sum);
}