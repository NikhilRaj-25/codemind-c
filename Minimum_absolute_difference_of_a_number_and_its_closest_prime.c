#include<stdio.h>
#include<math.h>
int isprime(int a){
    int i;
    for(i=2;i<=sqrt(a);i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a,b,i,c1,c2;
    scanf("%d",&a);
    if(isprime(a)){
        printf("0");
    }
    else{
        for(i=a;i<a+100;i++){
            if(isprime(i)){
                c1=i;
                break;
            }
        }
        for(i=a;i>a-100;i--){
            if(isprime(i)){
                c2=i;
                break;
            }
        }
        if((c1-a)>(a-c2)){
            printf("%d",a-c2);
        }
        else{
            printf("%d",c1-a);
        }
    }
}