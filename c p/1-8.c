#include <stdio.h>

int main()
{
	char c;
	int isSpace = 0;
	while((c=getchar())!=EOF)
	{
		if(isSpace==1&&c=='\ ')
		{
			continue;
		}
		if(c=='\ ')
		{
			isSpace = 1;			
		}
		if(isSpace == 1&&c!='\ ')
		{
			isSpace = 0;
		}
		printf("%c",c);
	}
	return 0;
}

