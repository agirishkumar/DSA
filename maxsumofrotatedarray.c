
#include<stdio.h> 



int maxSum(int arr[], int n) 
{ 
	
	int arrSum = 0; // Stores sum of arr[i] 
	int currVal = 0; // Stores sum of i*arr[i] 
	for (int i=0; i<n; i++) 
	{ 
		arrSum = arrSum + arr[i]; 
		currVal = currVal+(i*arr[i]); 
	} 


	int maxVal = currVal; 


	for (int j=1; j<n; j++) 
	{ 
		currVal = currVal + arrSum-n*arr[n-j]; 
		if (currVal > maxVal) 
			maxVal = currVal; 
	} 


	return maxVal; 
} 
 
int main(void) 
{ 
	int arr[] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	printf("%d",maxSum(arr, n)); 
	return 0; 
} 

