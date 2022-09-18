#include<stdio.h>
int dist(int a){
    if(a<0){
        return 0;
    }
    else if(a==0)
    {
        return 1;
    }
    else{
        return dist(a-1)+dist(a-2)+dist(a-3);
    }
}
int main(){
    int a,ans=0;
    scanf("%d",&a);
    ans=dist(a);
    printf("%d",ans);
}