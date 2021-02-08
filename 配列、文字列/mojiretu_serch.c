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
		printf("A,a‚Í%d•¶Žš–Ú‚Å‚·\n",i+1);
	else 
		printf("A,a‚ÍŠÜ‚Ü‚ê‚Ä‚¢‚Ü‚¹‚ñ\n");
}

