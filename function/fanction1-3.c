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
	
	printf("”Žš‚ð“ü—Í");
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	
	printf("\n%d",max(x,max(y,z)));
	/*•Ï”X‚ÆA•Ï”Y‚ÆZ‚ð”ä‚×‚½‚à‚Ì‚ð”äŠr
	   ‚Â‚Ü‚è X (Y,Z) ‚Á‚ÄŠ´‚¶
	   
	   iY,Z)‚ðiint a,int b)‚Éˆø‚«“n‚·
	     iY,Zj‚Ì‘å‚«‚¢•û‚Æ•Ï”X‚ð”ä‚×‚é
	      { X,iY>Z orZ>Y)}‚ð (int a,int b)‚Éˆø‚«“n‚·*/
		
}