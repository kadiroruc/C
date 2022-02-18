#include <stdio.h>
#include <conio.h>
#include <string.h>
void main() {
	char k[30];
	int i,j,a;

	printf("isim:");
	gets(k);

	for(i=0;i<strlen(k);i++)
	{
		if(k[i]!=32)
		k[i]=k[i]-32;

	}

	for(j=0;j<strlen(k);j++)
	{
        if(k[j]==32)
        break;
	}

		for(a=0;a<strlen(k);a++)
	{
		if(a==0)
		printf("%c",k[a]);
		else if((a!=0)&&(a<(j-1)))
		printf("*");
		else if(a==(j-1))
		printf("%c",k[j-1]);
		else if(a==(j+1))
		printf("%c",k[j+1]);
		else if((a>j)&&(a<(strlen(k)-1)))
		printf("*");
		else
		printf("%c",k[a]);

	}

	getch();

}
