#include<stdio.h>
int main()
{
	int n, i, j;
	printf("Enter n:");
	scanf("%d", &n);
	printf("Multiplication table from 1 to %d is...\n", n);
	for(i=1; i<=n; i++)
    	{
        		for(j=1; j<=10; j++)
            			printf("%3d ", i*j);
        		printf("\n");
	}
}
