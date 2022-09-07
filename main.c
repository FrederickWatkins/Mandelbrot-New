#include<stdio.h>
#include<stdlib.h>
#include"helper-functions.h"

int main(void){
    for(size_t i = 0; i < 40; i++){
        for(size_t j = 0; j < 60; j++){
            if(partOfSet(60, 40, j, i, 10000)){
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}