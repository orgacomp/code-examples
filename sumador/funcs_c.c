#include "funcs.h"

int sumar_c(int *v, unsigned length){
    int total = 0;
    for(unsigned i=0; i<length;++i){
        total += v[i];
    }
    return total;
}