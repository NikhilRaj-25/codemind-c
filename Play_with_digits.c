#include<stdio.h>
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>9){
            int ans=0,r;
            while(arr[i]){
                r=arr[i]%10;
                ans+=r;
                arr[i]/=10;
            }
            arr[i]=ans;
        }
        sum+=arr[i];
    }
    printf("%d",sum);
}