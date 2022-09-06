#include<complex.h>
#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>

static bool zPartOfSet(double complex c);

static double complex screenToComplex(int w, int h, int x, int y);

bool PartOfSet(int w, int h, int x, int y);