#include<stdio.h>
int main(void) {
	int i = 0;
	struct drink
	{
		char name[30];
		int maner;
		int size;
	};

	static struct drink ary[]=
	{	//���i��,�l�i,�e��
		//'' �V���O���R�[�e�[�V��������4���������g���Ȃ�
		{"Coke",150,450},
		{"Juice",130,500},
		{"Coffee",100,300}
	};

	for (i = 0; i < 3; i++) {
		printf("%s\t%3d�~\t%dml\n", ary[i].name, ary[i].maner, ary[i].size);

	}

}