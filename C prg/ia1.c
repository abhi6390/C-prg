#include<stdio.h>
int main()
{
int a=7,b=6,c;
c=a&b;
printf("Value of c is %d\n",c);
c=a<<1;
printf("Value of c is %d\n",c);
c=a|b;
printf("Value of c is %d\n",c);
printf("\nResult 1=%d\n",a++ + b++);
printf("\nValue of a+=b*=c is %d \n", a+=b*=c);
return 0;
}
//c=7<<1= 7x2, 7<<2= 7x4, 7<<3= 7x8, 7<<4=7x16