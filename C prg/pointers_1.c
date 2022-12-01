#include<stdio.h>
int main()
{
int i=69;
int *j=&i;
printf(" the value of i %d\n",i);
printf(" the value of i %d\n",*j);
printf(" the value of j %d\n",*(&j));
printf("The address of i is %u\n",&i);
printf("The address of i is %u\n",j);
printf("The address of j is %u\n",&j);

return 0;
}