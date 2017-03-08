#include <stdio.h>

int main() {
int a,b,r;
    for(a=1;a<=9;a++){
      for(b=1;b<=9;b++){
        r = a * b;
        printf("%d * %d = %2d  ",b,a,r);
      }
      printf("\n");
    }
}