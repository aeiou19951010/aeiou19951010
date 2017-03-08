#include <stdio.h>

int main(){
    int i;
    float s;
    int a[5] = {1,2,3,4,5};
    printf("某陣列a為\n");
    for(i=0;i<5;i++){
        printf("[%d]",a[i]);
    }
    printf("\n");
    printf("其平均值為\n");
    for(i=0;i<5;i++){
        s = s+a[i];
    }
    s = s/i;
    printf("%e\n",s);
}