#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int seed, ransu, i=1;

    printf("乱数の「タネ」を入力してください: ");
    scanf("%d", &seed);
    srand(seed);
    printf("\n%d の値を元にした疑似乱数列を賢妻して表示\n\n", seed);

    while (i <= 10) {
        ransu = rand() % 6 + 1;
        printf("%d 番目の乱数: %d\n", i, ransu);
        i++;
    }

    return 0;
}