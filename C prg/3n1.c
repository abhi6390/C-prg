#include<stdio.h>
int main()
{
  int i,n=100;
  printf("Numbers divisible by 7 are:");
  for(i=1;i<=n;i++)
  {
    if(i%3==0)
    {
      printf("%d\n",i);
    }
  }
  return 0;
}