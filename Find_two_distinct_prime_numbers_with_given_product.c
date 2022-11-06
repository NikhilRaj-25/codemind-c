#include<stdio.h>
int isprime(int a){
    if(a<2){
        return false;
    }
    else{
        for(int i=2;i<=a/2;i++){
            if(a%i==0){
                return false;
            }
        }
        return true;
    }
}
int main(){
    int a,j,c=0,i;
    scanf("%d",&a);
    int arr[20];
    for(i=1;i<=a/2;i++){
        if(a%i==0){
            arr[j]=i;
            j++;
        }
    }
    for(i=0;i<j;i++){
        if(isprime(arr[i])){
            if(isprime(arr[j-i])){
                c=1;
                printf("%d %d",arr[i],arr[j-i]);
                break;
            }
        }
    }
    if(c==0){
        printf("-1");
    }
}