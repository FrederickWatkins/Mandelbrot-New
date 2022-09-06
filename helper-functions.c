#include"helper-functions.h"

bool zPartOfSet(double complex c, int iterations){
    double complex z = 0;
    double complex previous[iterations];
    bool partOfSet = 0;
    for(size_t i = 0; i < iterations && !partOfSet; i++){
        z = (z * z) + c;
        if(cabs(z)>6000000){
            break;
        }
        for(size_t j = i; j > 0; j--){
            if(z == previous[j]){
                partOfSet = 1;
            }
        }
        previous[i] = z;
    }
    return partOfSet;
}