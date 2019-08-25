#include<stdio.h>
void arrayrotate(int arr[], int n,int d)
{
int i,j;
for(j=0;j<d;j++){
int temp = arr[0];
for (i=0;i<n-1;i++)
{
arr[i]=arr[i+1];

}
arr[i]=temp;
}
}

void printarray(int arr[], int n)
{
int i;
for (i=0;i<n;i++)
{
printf("%d",arr[i]);
}
printf("\n");
}

int main()
{
int arr[] = {2,1,24,6,3,9};
int n = sizeof(arr)/sizeof(arr[0]);
int d = 3;
arrayrotate(arr,n,d);
printarray(arr,n);
}
