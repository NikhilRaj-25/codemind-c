#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,num;
    scanf("%d",&num);
    while(c<num){
        c=a+b;
        a=b;
        b=c;
    }
    if((num-a)==(b-num)){
        printf("%d %d",a,b);
    }
    else if((num-a)>(b-num)){
        printf("%d",b);
    }
    else{
        printf("%d",a);
    }
}