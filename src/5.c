#include <stdio.h>

// int main(void)
// {
//     int x;

//     printf("点数(1〜10)を入力： "); scanf("%d", &x);
//     if(8<=x) printf("合格\n");
//     else //if(x<8)
//     {
//         printf("不合格\n");
//         printf("復習して再チャレンジしましょう\n");
//     }
//     return 0;
// }


// int main(void)
// {
//     int score;

//     printf("点数を入力してください： ");
//     scanf("%d", &score);

//     if(score<90)
//     if(score<70) printf("もっと頑張ろう\n");
//     else printf("OKです\n");
//     else printf("すばらしい\n");

//     return 0;
// }


int main(void) {
    int x;

    printf("10と比較したい数を、整数で入力してください： ");
    scanf("%d", &x);

    printf("\n「10 == %d」式の値は %d\n", x, 10 == x);
    printf("「10 != %d」式の値は %d\n", x, 10 != x);
    printf("「10 > %d」式の値は %d\n", x, 10 > x);
    printf("「10 < %d」式の値は %d\n", x, 10 < x);

    return 0;
}
