#include <stdio.h>

void main(){
    int a = 4, b = 5, c = 6, max = 0;

    max = a > b ? (a > c ? a : c) : (b > c ? b : c);
}

