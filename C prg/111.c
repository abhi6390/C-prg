#include<stdio.h>
int increment(int i);
int main()

{
int x=increment(10);
printf("%d\n", ++x);
return 0;
}
int increment(int i){
    return i++;
}