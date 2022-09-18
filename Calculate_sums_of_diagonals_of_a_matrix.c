#include<stdio.h>
int main(){
    int a,b,c,i,j;
    scanf("%d",&a);
    int arr[a][a];
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int s1=0,s2=0;
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
           if(i==j){
               s1+=arr[i][j];
           }
        }
    }
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
           if(i+j==a-1){
               s2+=arr[i][j];
           }
        }
    }
    printf("Principal Diagonal:%d
Secondary Diagonal:%d",s1,s2);
}