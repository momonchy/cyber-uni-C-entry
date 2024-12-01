// 問1:     scanf("%d", &height[i]);
// 問2:     9、10行目のコードが１回しか実行されない
// 問3:     7行目と14行目の 最後の ; を削除
//          7行目と14行目の i=1 を i=0 に変更
// 問4:     １の位を切り捨てて10で割った数

#include <stdio.h>
 
int main(void) {
    int i, h, height[4];

    for(i = 0; i < 4; i++) {
        printf("身長（整数で入力）：");
        scanf("%d", &height[i]);
    }
    printf("\n");

    for(i = 0; i < 4; i++) {
        printf("%d\t", height[i]);

        for(h = 0; h < height[i] / 10; h++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}


// 問5:     table[2][6]
// 問6:     【イ】table[0][i] 【ウ】table[1][i]
// 問7:     1000 g 以下のどんな重さを入力しても、料金は 580円 と表示される
// 問8:     for( i=5; i>=0; i--)

#include <stdio.h>
 
int main(void) {
    int i, weight, ryoukin;
    int table[2][6] = {{50,100,150,250,500,1000}, {120,140,210,250,390,580}};

    printf("重さ(g)を入力: "); scanf("%d", &weight); 
    if(weight > 1000) {
        printf("規格外です\n");
        return -1;
    }

    for(i = 5; i >= 0; i--) {
        if(weight <= table[0][i]) {
            ryoukin = table[1][i];
        }
    }

    printf("料金は %d 円です\n", ryoukin);
    return 0;
}


// 問9:     <stdlib.h>
// 問10:    for(i=0; i!=num; i++) && for(i=0; i<num; i=i+1)
// 問11:    rand() / RAND_MAX;
// 問12:    3.141664

#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    double x, y;
    int i, cnt = 0, num = 1000000;
     
    for(i = 1; i <= num; i++) {
        x = (double) rand() / RAND_MAX;
        y = (double) rand() / RAND_MAX;

        if( x * x + y * y < 1.0 ) {
            cnt++;
        }
    }
    
    printf("円周率は %f です\n", 4.0 * cnt / num);

    return 0;
}


// 問13:    <time.h>
// 問14:    srand(time(NULL));
// 問15:    return 0;
// 問16:    continue;
// 問17:    rand()%3+1;

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void) {
  int computer,user;
  srand(time(NULL));

    while(1) {
        printf("\n===じゃんけん===\n");
        printf("グー:1  チョキ:2  パー:3  (0で終了） : ");
        scanf("%d",&user); 

        printf("あなたは ");
        switch(user){
            case 0:
                return 0;
            case 1: printf("グー    ");
                break;
            case 2: printf("チョキ  ");
                break;
            case 3: printf("パー    ");
                break;
            default:
                continue;
        }

        printf("コンピュータは ");
        computer = rand() % 3 + 1;
        switch(computer){
            case 1: printf("グー    ");
                break;
            case 2: printf("チョキ  ");
                break;
            case 3: printf("パー    ");
                break;
        }

        if(user == computer) {
            printf("あいこ！\n");
        } else if(user % 3 == computer - 1) {
            printf("あなたの勝ち！\n");
        } else {
            printf("コンピュータの勝ち！\n");
        }
    }
    return 0;
}


// 問18:    #define MAX 100
// 問19:    if(N[n]!=0) continue; && if(N[n]) continue;
// 問20:    i+=n && i=i+n
// 問21:    9973

#include <stdio.h>
#define MAX 10000
 
int main(void) {
    int i, n;
    int N[MAX];
   
    for(i = 0; i < MAX; i++) {
        N[i]=0;                 // 素数候補として全て0に初期化
    }
    N[0] = N[1] = 1;            // 0と1は素数でないため候補から除外
 
    for(n = 2; n * n < MAX; n++) {
        if(N[n] == 1) {
            continue;           // nが素数でない場合
        }
        for(i = n * n; i < MAX; i += n) {
            N[i] = 1;           // nの倍数を候補から除外
        }
    }
   
    for(i = 0; i < MAX; i++) {
        if(N[i] == 0) {
            printf("%d ", i);   // 素数を表示
        }
    }
    printf("\n");

    return 0;
}


// 問22:    n=3; n>0; n--
// 問23:    i=0; i<n; i++
// 問24:    m=i;
// 問25:    2 3 5 5 8

#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    int Data[4];
    int i, m, n, tmp;
   
    for(i = 0; i < 4; i++) {
        Data[i] = rand() % 100;     // データ生成
    }

    printf("＊＊ 並べ替え前 ＊＊\n");
    for(i = 0; i < 4; i++) {
        printf("%d  ", Data[i]);
    }
    printf("\n");

    // 並べ替え処理
    for(n = 3; n > 0; n--) {
        m = n;

        for(i = 0; i < n; i++) {
            if(Data[i] > Data[m]) {
                m = i;
            }
        }
        tmp = Data[m]; Data[m] = Data[n]; Data[n] = tmp;
    }

    printf("\n\n＊＊ 並べ替え後 ＊＊\n");
    for(i = 0; i < 4; i++) {
        printf("%d  ", Data[i]);
    }
    printf("\n");

    return 0;
}