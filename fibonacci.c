#include <stdio.h>
int main() 
{
  int i,a,n=0,g=1,sum;
  sum =n+g;
  scanf("%d", &a);
  printf("0 1 ");
  for (i=3;i<=a;i++) 
  {
    printf("%d ", sum);
    n=g;
    g=sum;
    sum=n+g;
  }
  return 0;
}