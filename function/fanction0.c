#include <stdio.h>
int ans(int a,int b);

int main(void)
{
	int x,y,z;
	
	printf("���������\n");
	
	scanf("%d",&x);
	scanf("%d",&y);
	
	printf("%d\n",ans(x,y));
	return 0;
}

int ans(int a,int b)
{
	int c;
	
	c=(a+b)/2;
	
	return c;
}