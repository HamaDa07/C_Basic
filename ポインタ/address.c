#include<stdio.h>
int main(void)
{
	int mydt;
	mydt=1234;
	printf("mydt=%d\n",mydt);
	printf("mydtのアドレス=%p\n",&mydt);
	/*mydt=1234
	  mydtのアドレス=0019FF38
	*/
	
	return 0;
}