#include<stdio.h>
#include<string.h>

void main()
{
	char str[500];
	int n=1,i;
	printf("Enter the text: ");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==' ')
			n++;
	}
	if(str[strlen(str)-1]==' ')
		n-=1;
	printf("\nWords present in the text = %d",n);
}

