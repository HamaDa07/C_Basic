#include<stdio.h>
int main(void)
{
	int mydt;
	mydt=1234;
	printf("mydt=%d\n",mydt);
	printf("mydt�̃A�h���X=%p\n",&mydt);
	/*mydt=1234
	  mydt�̃A�h���X=0019FF38
	*/
	
	return 0;
}