#include<stdio.h>

int ans(a,b)
{
	int x;
	
	x=(a+b)/2;
	return (x);
}

int main(void)
{
	int c,d,e;
	
	printf("数字を入力\n");
	scanf("%d",&c);
	scanf("%d",&d);
	
		
	printf("%d",ans(c,d));
	
	return 0;
}