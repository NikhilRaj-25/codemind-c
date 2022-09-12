#include<stdio.h>
int isprime(int a){
    int i;
    for(i=2;i<=(a/2);i++){
        if(a%i==0){
            return 1;
        }
    }
    return 0;
}
int main(){
    int a,d=1,i;
    scanf("%d",&a);
    for(i=1;i<=a/2;i++){
        if(a%i==0){
            if(i==1){
                d++;
            }
            else{
                if(isprime(i)){
                  d++;
                }
            }
        }
    }
    printf("%d",d);
}