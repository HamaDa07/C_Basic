#include <stdio.h>

//構造体の定義
struct first {//struct 構造体名
	
	//char は、配列として宣言するとよい
	char name[30];//データ型　メンバ名
	char name[30];//データ型　メンバ名
	int price;
};

int main()
{	
	int i = 0;
	struct first var[3] = {//中身の宣言
		{"鉛筆",30}, //{"char型" , int型},
		{"消しゴム",50},
		{"ノート",100}
	};

	for (i = 0; i < 3; i++) {
		printf("商品名;%s\t価格:%3d円\n", var[i].name, var[i].price);
	}

}
