#include<stdio.h>
int main()
{
int m, n, gcd, lcm, p, q, r;
printf("enter m n= ");
scanf("%d%d", &m, &n);
p=m;
q=n;
r=m%n;
while (r!=0)
{
    m=n;
    n=r;
    r=m%n;
}
gcd=n;
lcm=(p*q)/n;
printf("gcd= %d \n", gcd);
printf("lcm= %d \n", lcm);
return 0;
}