#include <stdio.h>
#include <stdlib.h>

  int descriptionFirst(void);
  int funcScan(void);
  int funcCalc(void);
  int askContinu(void);

// 名前の母音を数値化したもの
  int nameNumber_1;
  int nameNumber_2;
// 計算結果
  double answer;
// Enter待ち用
  int enter;
// 繰り返し用
  int count;

int main(void) {

// 最初の説明
  descriptionFirst();

  funcScan();

  return 0;

}

// 最初に表示する説明
int descriptionFirst(void) {

// Count初期化
  count = 0;

  printf("一時期流行った、\"電卓だけでできる恋占い\"をC言語で組んでみました\n");
  puts  ("【二人の名前を数値化し、相性を見る】");
  puts  ("という占いです");
  printf("以下の指示に従ってもらえばいけるはずです\n\n");

}

// 実際の計算及び数値入力
int funcScan() {
// 簡易説明
  puts("占う二人の名前の母音を以下の式を使い数値化します");
  puts("\tあ=1");
  puts("\tい=2");
  puts("\tう=3");
  puts("\tえ=4");
  puts("\tお=5");
  puts("\tん=0");

// 数値入力
  printf("一人目の数値を入力してください:");
  scanf ("%d", &nameNumber_1);

  printf("二人目の数値を入力してください:");
  scanf ("%d", &nameNumber_2);

// 計算処理へ
  funcCalc();

}

int funcCalc(void) {

// 計算
  answer = nameNumber_1 + nameNumber_2;

  while (answer > 1) {
    answer /= 2;
  }

// パーセンテージ化
  answer *= 100;

// 結果発表
  printf("二人の相性は%3.1f%%です\n\n", answer);

// 繰り返すか否か
  askContinu();
}

// 繰り返すか否か
int askContinu(void) {
  puts  ("続けますか？");
  printf("うん、もっとやりたい:0\n");
  printf("いやや、もううんざり:1\n");
  printf("Your Answer:");
  scanf ("%d", &count);

// 続ける
  if (count == 0) {

    printf("それじゃ、再び始めますね\n\n");
    funcScan();

    } else if (count == 1) {
    puts("Thak you for using this app");
    puts("See you again");
    exit(0);
  }
}
