#include<stdio.h>
int main(){
    int a,b,i,j,s=0;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<b;i++){
        s=0;
        for(j=0;j<a;j++){
            s+=arr[j][i];
        }
        printf("%d ",s);
    }
}