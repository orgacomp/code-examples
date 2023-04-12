#include<stdio.h>
#include "funcs.h"

int main(){
    int v[] = {1,2,3,4,5,6,7,8,9,10};
    int total_c = sumar_c(v, sizeof(v)/sizeof(int));
    int total_asm = sumar_asm(v, sizeof(v)/sizeof(int));


    printf("Total C = %d\n", total_c);
    printf("Total ASM = %d\n", total_asm);
    return 0;
}