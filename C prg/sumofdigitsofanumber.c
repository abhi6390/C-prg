#include<stdio.h>
int add(int);
int main()
{
int n, result;
printf("Number= ");
scanf("%d", &n);
result=add(n);
printf("Sum=%d\n", result);


}

int add(int n)
{
    int sum=0,d;
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
 return(sum);
}