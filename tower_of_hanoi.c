#include<stdio.h>
void towers(int n,char from,char to , char aux)
{
if (n ==1)
{
	printf("Move disk 1 from %c to %c \n",from,to);
	return;
}
towers(n-1,from,aux,to);
printf("Move disk %d from %c to %c \n",n,from,to);
towers(n-1,aux,to,from);
}
int main()
{
int n;
printf("Enter no. of disks in the tower: ");
scanf("%d",&n);
printf("Sequence of disk movements among the towers are: \n");
towers(n,'A','C','B');
return 0;
}
