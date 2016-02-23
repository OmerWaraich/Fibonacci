#include <stdio.h>

int main(){
	int n; // Number you want to print Fibonacci
	int i; // for loop counter
	int current; // valu eof ith fibbonacci number
	int next; //value of ith+1 fibonacci number
	int twoaway; //value of ith + 2 fibonacci number

	printf("How many number of Fibonacci you want to compute ?\n");
	scanf("%d",&n);
	if (n <= 0)
	{
		printf("Number should be positive\n");
	}
	else
	{
		printf("\n\n I \t Fibonacci(I)\n");
		printf("*************************\n");
		next = current = 1 ;
		for (i = 1; i < n; i++)
		{
			printf(" %d \t   %d\n",i, current );
			twoaway = current + next;
			current = next;
			next =twoaway;
		}
	}

}