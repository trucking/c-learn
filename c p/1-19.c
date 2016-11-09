#include <stdio.h>
void reverse(char out[],char in[]);

int main()
{
	char char1[10],char2[10]= "nihao";
	
	reverse(char1,char2);
	//int i;
	//for(i=0;i<=j;i++)
	printf("%s",char1);
	return 0;
}

void reverse(char *out,char *in)
{
	char *p = in;
	//char *q = p;
	while(*p!='\0')
	{
		p++;
	}
	p--;
	while(in-p!=1)
	{
		*out++ = *p--;
	}
	//*out++ = *q--;
	*(++out) = '\0';	
}

