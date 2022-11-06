#include<stdio.h>
int main(){
    int a,b,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int j;
    for(i=0;i<a;i++){
        for(j=i+1;j<a;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
                break;
            }
        }
    }
}