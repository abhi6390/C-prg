#include <stdio.h>

int main(void) {
    int t, x, y, z, w;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d", &x, &y, &z);
        w=x+y;
       if(x<=z && y<=z){
       printf("1\n");
       }
       else if(w<=z){
           printf("2\n");
       }
       else {
           printf("0\n");
       }
    }
	return 0;
}
