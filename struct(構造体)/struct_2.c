#include <stdio.h>
#include<string.h>//strcpy関数(文字列のコピー)
//vs2019では、strcpy_s()をつかう

struct exam_result 
{
	char name[10];
	int japanese;
	int math;
	int english;
};
/*
田中太郎の平均点 : 81
田中二郎の平均点 : 83
田中花子の平均点 : 72 */

int main()
{
	int ave;
	//構造体の宣言
	//sturct 構造体名　変数名
	struct exam_result Taro;
	struct exam_result Jiro;
	struct exam_result Hanako;

/*	文字列 strcpy(変数名.構造体名の要素名,"名前")
	数字   変数名.構造体の要素=数値*/
	strcpy_s(Taro.name, "田中太郎");
	Taro.japanese = 90;
	Taro.math = 75;
	Taro.english = 80;

	strcpy_s(Jiro.name,"田中二郎");
	Jiro.japanese = 50;
	Jiro.math = 100;
	Jiro.english = 99;

	strcpy_s(Hanako.name, "田中花子");
	Hanako.japanese = 88;
	Hanako.math = 60;
	Hanako.english = 69;

	//入力されたデータの活用
	//メンバの平均
	ave = (Taro.english + Taro.math + Taro.japanese) / 3;
	printf("%sの平均点:%d\n", Taro.name, ave);

	ave = (Jiro.english + Jiro.japanese + Jiro.math) / 3;
	printf("%sの平均点:%d\n", Jiro.name, ave);

	ave = (Hanako.english + Hanako.japanese + Hanako.math) / 3;
	printf("%sの平均点:%d\n", Hanako.name, ave);
   /*田中太郎の平均点:81
	 田中二郎の平均点:83
	 田中花子の平均点:72*/
}

