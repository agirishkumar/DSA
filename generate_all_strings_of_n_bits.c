#include<stdio.h>
 
char A[10] = {0};
 
void binary(int n)
{
    if(n < 1)
        printf("%s\n",A);    // Assume A is a global variable
    else
    {
        A[n-1] = '0';
        binary(n-1);
        A[n-1] = '1';
        binary(n-1);
    }
}
 
// main function
int main(void)
{
	int len;
	printf("Enter the bit: ");
	scanf("%d",&len);
	printf("\n");
	binary(len);
	return 0;
}
