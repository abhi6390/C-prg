#include<stdio.h>
int main()

{
    int n, temp, r, sum, count;
    printf("Enter a number:");
    scanf("%d", &n);
    count = 0;
    while(n>9)
    {
        count++;
        temp = n;
        sum = 0;
        while(temp>0)
        {
            r = temp % 10;
            sum += r;
            temp /= 10;
        }
        n = sum;
    }
    printf("AR= %d\n", count);
}
