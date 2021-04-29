#include<stdio.h>
int main(void)
{
	int *pt;//ポインタの宣言
	int mydt;//通常の変数の宣言
	mydt=1234;
	
	pt=&mydt;//アドレスを代入
	printf("アドレスmydt=%p\n",&mydt);
	
	printf("アドレス  pt=%p\n",pt);
	return 0;
	/*アドレスmydt=0019FF38
	  アドレス  pt=0019FF38*/
}