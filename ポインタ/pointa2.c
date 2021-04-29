#include<stdio.h>
int main(void)
{
	int *pt;
	int mydt;
	mydt=1234;
	pt=&mydt;//代入
	
	printf("mydt=%d\n",mydt);//1234
	printf("pt=%d\n",*pt);//1234
}
