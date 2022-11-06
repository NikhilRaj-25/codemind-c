#include<stdio.h>
int isprime(int a){
    int i;
    if(a<2){
        return 0;
    }
    else{
        for(i=2;i<=(a/2);i++){
            if(a%i==0){
                return 0;
            }
        }
        return 1;
    }
}
int main(){
    int a,b,i,c=0;
    scanf("%d",&a);
    if(isprime(a)){
        while(a!=0){
            b=a%10;
            a=a/10;
            if(isprime(b)){
                c=2;
            }
            else{
                c=1;
                break;
            }
        }
    }
    else{
        printf("Not Mega Prime");
    }
    if(c==1){
        printf("Not Mega Prime");
    }
    else if(c==2){
        printf("Mega Prime");
    }
}