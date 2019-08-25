#include<stdio.h>
int main()
{
int arr[] = {11, 15, 6, 8, 9, 10};
int n =sizeof(arr)/sizeof(arr[0]);
int x =19;
int i;
for (i =0;i<n;i++)
{

if(arr[i]>arr[i+1])
printf("%d times roatated",i+1);
if(arr[i]+arr[i+1]==x)
printf("Pair exists \n");
}

return 0;
}
