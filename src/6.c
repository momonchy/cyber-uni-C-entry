// 問1  「７」以外の数を入力したが「あたり！」と表示される
// 問2  ==

// #include<stdio.h>
 
// int main(void)
// {
//     int  x,answer=7;
 
//     printf("整数(0～9)を入力：");
//     scanf("%d",&x);
 
//     if(x == answer) printf("あたり！\n");
//     if(x<answer) printf("はずれ！もっと大きいよ\n");
//     if(x>answer) printf("はずれ！もっと小さいよ\n");
     
//     return 0;
// }


// 問3  11、13、15、17、19、21、23、24行目 が全て省略できる

// #include<stdio.h>
 
// int main(void)
// {
//     int  x,answer=7;
 
//     printf("整数(0～9)を入力：");
//     scanf("%d",&x);
 
//     if(x == answer) printf("あたり！\n");
//     else if(x<answer) printf("はずれ！もっと大きいよ\n");
//     else printf("はずれ！もっと小さいよ\n");
 
//     return 0;
// }


// 問4  11、13、18、20、22、24行目のみ省略できる

// #include<stdio.h>
 
// int main(void)
// {
//     int x,answer=7;
 
//     printf("整数を入力：");
//     scanf("%d",&x);
 
//     if(x == answer) printf("あたり！\n");
//     else 
//     {
//         printf("はずれ！\n");
//         if(x<answer) printf("もっと大きいよ\n");
//         else printf("もっと小さいよ\n");
//     }
//     return 0;
// }


// 問5  8行目の %d を %f に変更する
//      10行目の %d を %f に変更する
// 問6  x<=120 に変更する, 120>=x に変更する
// 問7  「120」と入力すると、「Sサイズをご利用ください」と「Mサイズをご利用ください」の両方が表示される
//      「160」と入力すると、「Mサイズをご利用ください」と「Lサイズをご利用ください」の両方が表示される
// 問8  140<=x に変更する
//      x>=140 に変更する

// #include<stdio.h>
 
// int main(void)
// {
//     float x;
 
//     printf("身長を入力：");
//     scanf("%f",&x);
 
//     printf("あなたの身長は %f cmですね\n",x);
 
//     if(120>=x) printf("Sサイズをご利用ください\n");
//     if((120<x)&&(x<140)) printf("Mサイズをご利用ください\n");
//     if(x>=140) printf("Lサイズをご利用ください\n");
 
//     return 0;
// }

