#include <stdio.h>

int main(void) {
    int xi, yi;

    for (yi = 1; yi <= 5; yi++) {
        for(xi = 1; xi <= 6 - yi; xi++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


// int main(void) {
//     int i;

//     for (i = 9; i >= 1; i = i - 2) {
//         printf("%d ", i);
//     }
//     return 0;
// }

// int main(void) {
//     int x, y;

//     for (y = 3; y >= 1; y--) {
//         for(x = 1; x <= 5; x++) {
//             printf("%d0%d ", y, x);
//         }
//         printf("\n");
//     }

//     return 0;
// }