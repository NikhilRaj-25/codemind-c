#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    int arr[a];
    int s=1;
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int c=0;
    while(1){
        c=0;
        for(i=0;i<a;i++){
            if(s==arr[i]){
                c=1;
                break;
            }
        }
        if(c==1){
            s++;
        }
        else{
            break;
        }
    }
    printf("%d",s);
}