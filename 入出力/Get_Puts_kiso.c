#include<stdio.h>
int main(void)
{
	char st[]="computer";
	char str[111];
	
	gets(str);/*一行入力できる*/
	
	puts(st);/*文字列を出力、勝手に改行してくれる*/
	puts(str);/*文字列を出力、勝手に改行してくれる*/
}