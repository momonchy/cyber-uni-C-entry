#include <stdio.h>

struct fullname{
  char family[32];
  char first[32];
};
struct record{
  int english;
  int math;
};
struct student{
  int group;
  struct fullname name;
  struct record score[3];
};

int main()
{
  int i;
  struct student Data[3]
                 = { {1, {"小山","一郎"}, {{80,90},{81,91},{82,92}} }, 
                     {2, {"中田","花子"}, {{90,80},{91,81},{92,82}} },
                     {3, {"大川","二郎"}, {{80,80},{81,81},{82,82}} } };
   
  float sum=0;
  for(i=0;i<3;i++){
    sum += Data[i].score[1].english;
  }
  printf("平均点 %.1f点\n", sum/3.0);
   
  return 0;
}


// 問1   2行目に double std;  を追加し、5行目と13行目を削除する
// 問2   3行目を double calc_std(double h)  に変更する。
//       7行目を return std; に変更する。
// 問3   5行目の std を *std に、6行目の bmi を *bmi にする
//       17行目の *std を &std に、 *bmi を &bmi にする
// 問4   7行目を }; に変更
//       9行目を struct results calc_std_bmi(double h,double w) に変更
// 問5   24行目を x=calc_std_bmi(h,w); に変更
// 問6   3行目を typedef struct results に変更
// 問7   7行目を } RES; に変更
// 問8   imax = i;
// 問9   int maxdata(int* Data, int n)
// 問10  *(Data+imax) < *(Data+i)
// 問11  swap(Data+imax, Data+(n-1));
// 問12  imax = i + maxdata(Data+i,N-i);
//       imax = i + maxdata(&Data[i] ,N-i);
// 問13  12行目を strcpy(str2, str1); に変更する
// 問14  12行目を削除し、13行目と14行目の間に str2[i]=str1[i]; を追加する。
//       12行目を削除し、14行目と15行目の間に else str2[i]=str1[i]; を追加する。
// 問15  if( ('A'<=str1[i]) && (str1[i]<='Z') )  str2[i] = str1[i] + 'a'-'A';
//       if( (0x41<=str1[i]) && (str1[i]<=0x5A) )  str2[i] = str1[i] + 0x61-0x41;
// 問16  fgets(str1,256,stdin);
// 問17  B C A
// 問18  printf("%s %s\n", Data[i].name.family, Data[i].name.first);
// 問19  printf("%d組 ", (&Data[i])->group );
//       printf("%d組 ", (Data+i)->group );
// 問20  sum += Data[1].score[i].english;
// 問21  sum += Data[i].score[1].english;