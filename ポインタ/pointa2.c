#include<stdio.h>
int main(void)
{
	int *pt;
	int mydt;
	mydt=1234;
	
	pt=&mydt;
	printf("mydt=%d\n",mydt);
	printf("pt=%d\n",*pt);
}
