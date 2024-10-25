#include <stdio.h>
#include <math.h>

int main(void) {
    char name[20];
    int age;
    float height, weight;

    printf("名前を入力してください：");
    scanf("%s", name);
    printf("年齢を入力してください：");
    scanf("%d", &age);
    printf("身長を入力してください：");
    scanf("%f", &height);
    printf("体重を入力してください：");
    scanf("%f", &weight);

    printf("*****\n");
    printf("%sさんは%d歳、身長%.1fcm、体重%.1fkgですね\n", name, age, height, weight);
    printf("%sさんの肥満度指数は %.1f です\n", name, weight * 10000 / pow(height,2));

    return 0;
}