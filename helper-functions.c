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
    if(cabs(z)<1000){
        partOfSet = 1;
    }
    return partOfSet;
}

double complex screenToComplex(int w, int h, int x, int y){
    double ratio;
    double r;
    double i;

    if(((double)(w) > ((double)h)*1.5)){
        ratio = 2 / (double) h;
    } else {
        ratio = 3 / (double) w;
    }

    r = ((double)x - ((double)w)/1.5) * ratio;
    i = (((double)h / 2) - y) * ratio;

    return CMPLX(r, i);
}

bool partOfSet(int w, int h, int x, int y, int iterations){
    return zPartOfSet(screenToComplex(w, h, x, y), iterations);
}