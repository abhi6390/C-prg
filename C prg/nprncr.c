#include <stdio.h>
#include<math.h>
 

 
int main()
{
 int n,r,npr;
 
  	printf("Enter a number n\n");
  	scanf("%d",&n);
 printf("Enter a number r\n");
  	scanf("%d",&r);
  	npr=fact(n)/fact(n-r);
    printf("Value of %dP%d = %d\n",n,r,npr);
}