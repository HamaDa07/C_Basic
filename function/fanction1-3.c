#include<stdio.h>
int max(int a,int b)
{
	if(a>b)
		return a;
	
	else
		return b;
}
int main(void)
{
	int x,y,z;
	
	printf("���������");
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	
	printf("\n%d",max(x,max(y,z)));
	/*�ϐ�X�ƁA�ϐ�Y��Z���ׂ����̂��r
	   �܂� X (Y,Z) ���Ċ���
	   
	   �iY,Z)���iint a,int b)�Ɉ����n��
	     �iY,Z�j�̑傫�����ƕϐ�X���ׂ�
	      { X,�iY>Z orZ>Y)}�� (int a,int b)�Ɉ����n��*/
		
}