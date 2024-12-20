#include <stdio.h>

int main(void) {
    int Hairetsu[5] = {10, 20, 30, 40, 50};

    printf("%d,%d,%d\n", (Hairetsu+2)[0], (Hairetsu+2)[1], (Hairetsu+2)[2]);

    return 0;
}