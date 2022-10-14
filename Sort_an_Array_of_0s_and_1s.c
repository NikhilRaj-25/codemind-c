#include<stdio.h>
void bubble(int *arr,int n)
{
	int i,j,k=n;
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
		//printf("Pass-%d  SC=%d",i+1,swap);
		//printf("
");
		if(swap==0)
		{
			break;
		}
		k--;
	}
}
int main(){
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	bubble(arr,n);
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}