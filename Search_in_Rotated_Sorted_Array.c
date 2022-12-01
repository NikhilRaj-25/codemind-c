#include<stdio.h>
/*void sort(int *arr,int n)
{
	int i,j,k=n,c=0;
	for(i=0;i<n;i++)
	{
		int swap=0;
		for(j=0;j<k-1;j++)
		{
			if(arr[j+1]<arr[j])
			{
				swap++;
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		c+=swap;
		//printf("%d",swap);
		//printf("
");
		//printf("Pass-%d  SC=%d",i+1,swap);
		//printf("
");
		if(swap==0)
		{
			break;
		}
		k--;
	}
	for(i=0;i<n;i++){
	    printf("%d ", arr[i]);
	}
	printf("
");
}*/
int main(){
    int a,i,se;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&se);
    //sort(arr,a);
    int c=0;
    for(i=0;i<a;i++){
        if(arr[i]==se){
            printf("%d",i);
            c=1;
            break;
        }
    }
    if(c==0){
        printf("-1");
    }
}