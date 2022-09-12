#include<stdio.h>
int main(){
    int a,b,c,d,ans=0,i,t,j;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        ans=0;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        for(j=1;j<=a;j++){
            if(j%a==0 and j%b!=0){
                ans+=1;
                if(ans>=d){
                    break;
                }
            }
            else if(j%b==0 and j%a!=0){
                ans+=1;
                if (ans>=d){
                    break;
                }
            }
        }
        if(ans>=d){
            printf("Win
");
        }
        else{
            printf("Lose
");
        }
    }
}