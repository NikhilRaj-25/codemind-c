#include<stdio.h>
int main()
{
	long long x,y,c,d;
	scanf("%lli%lli",&x,&y);
	 if (x == 0 && y % 2 == 0)
		 {
         printf("YES");  
    	}
        else if (x == 0 && y % 2 != 0)
		{
            printf("NO");
        }
        else if ((x + (2 * y)) % 2 ==0)
		{
            printf("YES");
        }
        else 
		{
            printf("NO");
        }
    return 0;
}