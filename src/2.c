// プリプロセッサ
#include <stdio.h>

// メインプログラム
int main(void) {
    printf("Hello, World!\n");
    printf("%dは整数で、%fは実数です\n", 10, 3.14);
    printf("%cは文字で、%sは文字列です\n", 'A', "Hello");
    printf("%cは文字で、%dはその文字コードです\n", 'A', 'A');

    return 0;
}