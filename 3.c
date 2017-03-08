#include <stdio.h>

int main() {
        int x;
        scanf("%d",&x);
        if  (x%2!=0 && x%3!=0 && x%5!=0)
            {
            printf("此數為質數");
            }
         else if(x <= 0)
            {
                printf("數不能小於等於0");
            }
         else
            {
                printf("此數不為質數");
            }
} 

