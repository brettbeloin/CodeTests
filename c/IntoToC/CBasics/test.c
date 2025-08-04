#include <stdio.h>
#include "headers/test.h"

int n = 0;

void recursive_function(int n) {
    n++;

    printf("%d\n", n);

    if (n < 10) {
        recursive_function(n);
    }
}