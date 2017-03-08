#include <stdio.h>

int main() {
    int x,k,i;
    int y[6] = {0,1,2,5,6,7};
    printf("輸入一個數，此數會排進此數列中[1,2,5,6,7]\n");
    scanf("%d",&y[0]);
    for( i = 0; i < 6; i++) {
        for( k = i; k < 6; k++) {
            if( y[k] < y[i] ) {
                x = y[k];
                y[k] = y[i];
                y[i] = x;
            }
        } 
    }
    for( i = 0; i < 6; i++ ) {
        printf("%d ", y[i]);
    }

    printf("\n");

}


