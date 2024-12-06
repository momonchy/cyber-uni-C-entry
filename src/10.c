#include <stdio.h>

void triangle(int start, int end, int center);
void print_stars(int n, int m);
int odd(int in);

int G = 0;

int main(void) {
    triangle(1, 4, 10);
    triangle(3, 6, 10);
    triangle(5, 8, 10);
    print_stars(8, 3);
    print_stars(8, 3);
    printf("\n★の合計は %d個です\n", G);

    return 0;
}

void triangle(int start, int end, int center) {
    // int G;

    for(G = start; G <= end; G++) {
        print_stars(center - G, odd(G));
    }
    return;
}

void print_stars(int n, int m) {
    int i;

    for(i = 1; i <= n; i++) {
        printf(" ");
    }
    for(i = 1; i <= m; i++) {
        printf("★");
        G++;
    }
    printf("\n");
    return;
}

int odd(int in) {
    int out;
    out = 2 * in - 1;

    return out;
}