#include<stdio.h>
int main()
{
    int n, rev=0, count=0, d;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
        count++;
    }
    printf("Number of digits=%d\n",count);
    printf("Reverse of the number is %d\n",rev);
    return 0;
}