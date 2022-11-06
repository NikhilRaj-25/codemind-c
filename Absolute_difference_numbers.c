#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c=0,d=0,e=a;
    c=pow(10,b);
    d=a%c;
    int r=0,s=0;
    while(a!=0){
        r=a%10;
        s=s*10+r;
        a=a/10;
    }
    int f=s%c;
    s=0;
    r=0;
    while(f!=0){
        r=f%10;
        s=s*10+r;
        f=f/10;
    }
    printf("%d",abs(d-s));
}