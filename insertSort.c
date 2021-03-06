#include<stdio.h>
#include<time.h>
void insertSort(int arr[] , int n)
{
int i,key,j;
for(i=1;i<n;i++)
{
	key=arr[i];
	j=i-1;
	while(j>=0 && arr[j]>key)
	{
		arr[j+1]=arr[j];
		j=j-1;	
	}
	arr[j+1]=key;
}
}

void printArray(int arr[],int n)
{
	int i;
	printf("Increasing order:");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	printf("Decreasing order:");
	for(i=n-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
}

int main()
{
clock_t start, end;
double cpu_time_used;
start = clock();
int arr[] = {5,2,4,6,1,3};
int n = sizeof(arr)/sizeof(arr[0]);
insertSort(arr,n);
printArray(arr,n);
end = clock();
cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
printf("time taken is %f\n",cpu_time_used);
return 0;

}
