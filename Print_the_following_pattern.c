#include<stdio.h>
int main(){
    int i,j,a,b;
    scanf("%d",&a);
    b=a;
    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++){
            if(i==j || i+j==a+1){
                printf("%d ",b);
            }
            else{
                printf(" ");
            }
        }
        b--;
        printf("
");
    }
}