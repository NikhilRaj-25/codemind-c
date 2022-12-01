#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int j;
    for(i=0;i<a;i++){
        int m=0;
        for(j=i+1;j<a;j++){
            arr[i]=0;
            if(arr[i]<arr[j] && m<arr[j]){
                m=arr[j];
            }
        }
        arr[i]=m;
        if(i==a-1){
            arr[i]=-1;
        }
    }
    for(i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
}