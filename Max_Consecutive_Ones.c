#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int c=0,s=0;
    for(i=0;i<a;i++){
        if(arr[i]==1){
            c+=1;
        }
        else{
            if(c>s){
                s=c;
            }
            c=0;
        }
    }
    if(c>s){
        s=c;
    }
    printf("%d",s);
}