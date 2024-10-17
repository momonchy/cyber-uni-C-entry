#include <stdio.h>

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

    return 0;
}