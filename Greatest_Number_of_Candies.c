#include<stdio.h>
int main(){
    int a,b,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&b);
    int c=0,d=0,j;
    for(i=0;i<a;i++){
        c=arr[i]+b;
        for(j=0;j<a;j++){
            if(c>=arr[j]){
                d=1;
            }
            else{
                d=0;
                break;
            }
        }
        if(d==1){
            printf("True ");
        }
        else{
            printf("False ");
        }
    }
}