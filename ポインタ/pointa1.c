#include<stdio.h>
int main(void)
{
	int *pt;//�|�C���^�̐錾
	int mydt;//�ʏ�̕ϐ��̐錾
	mydt=1234;
	
	pt=&mydt;//�A�h���X����
	printf("�A�h���Xmydt=%p\n",&mydt);
	
	printf("�A�h���X  pt=%p\n",pt);
	return 0;
	/*�A�h���Xmydt=0019FF38
	  �A�h���X  pt=0019FF38*/
}