// 問1  「７」以外の数を入力したが「あたり！」と表示される
// 問2  ==

#include<stdio.h>
 
int main(void)
{
    int  x,answer=7;
 
    printf("整数(0～9)を入力：");
    scanf("%d",&x);
 
    if(x == answer) printf("あたり！\n");
    if(x<answer) printf("はずれ！もっと大きいよ\n");
    if(x>answer) printf("はずれ！もっと小さいよ\n");
     
    return 0;
}


// 問3  11、13、15、17、19、21、23、24行目 が全て省略できる

#include<stdio.h>
 
int main(void)
{
    int  x,answer=7;
 
    printf("整数(0～9)を入力：");
    scanf("%d",&x);
 
    if(x == answer) printf("あたり！\n");
    else if(x<answer) printf("はずれ！もっと大きいよ\n");
    else printf("はずれ！もっと小さいよ\n");
 
    return 0;
}


// 問4  11、13、18、20、22、24行目のみ省略できる

#include<stdio.h>
 
int main(void)
{
    int x,answer=7;
 
    printf("整数を入力：");
    scanf("%d",&x);
 
    if(x == answer) printf("あたり！\n");
    else 
    {
        printf("はずれ！\n");
        if(x<answer) printf("もっと大きいよ\n");
        else printf("もっと小さいよ\n");
    }
    return 0;
}


// 問5  8行目の %d を %f に変更する
//      10行目の %d を %f に変更する
// 問6  x<=120 に変更する, 120>=x に変更する
// 問7  「120」と入力すると、「Sサイズをご利用ください」と「Mサイズをご利用ください」の両方が表示される
//      「160」と入力すると、「Mサイズをご利用ください」と「Lサイズをご利用ください」の両方が表示される
// 問8  (120<x)&&(x<140) に変更する
// 問9  140<=x に変更する
//      x>=140 に変更する

#include<stdio.h>
 
int main(void)
{
    float x;
 
    printf("身長を入力：");
    scanf("%f",&x);
 
    printf("あなたの身長は %f cmですね\n",x);
 
    if(120>=x) printf("Sサイズをご利用ください\n");
    if((120<x)&&(x<140)) printf("Mサイズをご利用ください\n");
    if(x>=140) printf("Lサイズをご利用ください\n");
 
    return 0;
}


// 問10  tmp を tmp==0 に変更する
// 問11  「b が一番大きい」と「a が一番大きい」の両方が表示される
// 問12  14行目の if(a<b) の後に { を、17行目の else の前後に } と { を、20行目に } を書き加える。

#include <stdio.h>
 
int main(void)
{
    int a,b,c,tmp;
 
    printf("a："); scanf("%d",&a);
    printf("b："); scanf("%d",&b);
    printf("c："); scanf("%d",&c);
 
    tmp=(a-b)*(b-c)*(c-a);
    if(tmp == 0) return 0; //同じなら終了
 
    if(a<b)
    {
        if(b<c) printf("c が一番大きい\n");
        if(c<b) printf("b が一番大きい\n");
    }
    else
    {
        if(a<c) printf("c が一番大きい\n");
        if(c<a) printf("a が一番大きい\n");
    }
    return 0;
}


// 問13  break
// 問14  year%4
// 問15  else
// 問16  default

#include<stdio.h>
 
int main(void)
{
    int month,year;
 
    printf("月を入力：");  
    scanf("%d",&month);
 
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("%d月は31日までです\n",month);
            break;
        case 2:
            printf("西暦年を入力：");
            scanf("%d",&year);
            if( year % 4 ) printf("うるう年ではないので、2月は28日までです\n");
            else printf("うるう年なので、2月は29日までです\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("%d月は30日までです\n",month);
            break;
        default:
            printf("%d月という月はありません\n",month);
            break;
    }
    printf("覚えておいてくださいね\n");
    return 0;
}


// 問17  &&

#include<stdio.h>
 
int main(void)
{
    int x,y;
 
    printf("整数 x を入力･･･"); scanf("%d",&x);
    printf("整数 y を入力･･･"); scanf("%d",&y);
     
    if((x < 100) && (y < x)) printf("OK\n");
    return 0;
}


// 問18  ||

#include<stdio.h>
 
int main(void)
{
    int x,y;
 
    printf("整数 x を入力･･･"); scanf("%d",&x);
    printf("整数 y を入力･･･"); scanf("%d",&y);
     
    if((x < 10) || (100 < y)) printf("OK\n");
    return 0;
}


// 問19  x も y も、最初に y に入っていた値になってしまう
// 問20  tmp=y; y=x; x=tmp;
//       tmp=x; x=y; y=tmp;

#include<stdio.h>
int main(void)
{
    int x,y,tmp;
 
    printf("整数 x を入力･･･"); scanf("%d",&x);
    printf("整数 y を入力･･･"); scanf("%d",&y);
     
    // tmp=y; y=x; x=tmp;
    tmp=x; x=y; y=tmp;
 
    printf("x には %d、y には %d が入っています\n",x,y);
    return 0;
}


// 問21  ++x;
//       x++;
//       x=1+x;
//       x+=1;
// 問22  x+=y;
//       x=y+x;


#include<stdio.h>
int main(void)
{
    int x,y;
 
    printf("整数 x を入力･･･"); scanf("%d",&x);
    printf("整数 y を入力･･･"); scanf("%d",&y);
     
    ++x;
    printf("x を 1 増やすと %d になりました\n",x);
    x+=y;
    printf("さらに x を y 増やすと %d になりました\n",x);
     
    return 0;
}