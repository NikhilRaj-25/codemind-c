#include<stdio.h>
#include<math.h>
int main(){
    int a,b=0,i=1,c,j=0;
    scanf("%d",&a);
    while(b<=a){
        b=pow(2,i);
        c=pow(2,j);
        i++;
        j++;
    }
    if((b-a)<(a-c)){
        printf("%d",b-a);
    }
    else{
        printf("%d",a-c);
    }
}