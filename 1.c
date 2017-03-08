#include <stdio.h>

int main() {
  int a=10, s=1;
  while (a>=2) {
    s = s * a;
    a = a - 1;
  }
      printf("%d",s);
      printf("\n");
}