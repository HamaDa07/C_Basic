#include<stdio.h>
int main(void)
{
	int *pt;
	int mydt;
	mydt=1234;
	
	pt=&mydt;
	printf("’lmydt=%d\n",mydt);
	printf("’l *pt=%d\n",*pt);
}