#include<stdio.h>
int main(){
    int a,i,j=0;
    scanf("%d",&a);
    int arr[a],ans[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++){
        if(arr[i]!=0){
            ans[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<j;i++){
        printf("%d ",ans[i]);
    }
    int b=a-j;
    while(b){
        printf("0 ");
        b--;
    }
}