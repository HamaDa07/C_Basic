#include<stdio.h>
int main(void)
{
	char str[200];
	int i;
	
	scanf("%s",str);
	
	for (i=0;str[i];i++){
		
		if(str[i]=='A'||str[i]=='a')
			break;
	}
	if (str[i])
		printf("A,a��%d�����ڂł�\n",i+1);
	else 
		printf("A,a�͊܂܂�Ă��܂���\n");
}

