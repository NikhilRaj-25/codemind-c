#include<stdio.h>
int main(){
    int a,b,i,j,ans=0;
    scanf("%d %d",&a,&b);
    int arr[a][b],x=a-1;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int osum=0,esum=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(i%2==0)
            {
                esum+=arr[i][j];
            }
            else if(i%2!=0)
            {
                osum+=arr[i][j];
            }
        }
    }
    printf("%d %d",esum,osum);
}