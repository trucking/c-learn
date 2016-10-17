#include <stdio.h>
#include <stdlib.h>
#include "list.h"
struct Node
{
	ElementType Element;
	Position Next;
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	List L;
	L = MakeEmpty(L);
	ElementType i = 1;
	Insert(i,L,L);
	List P = L;
	for(i=2;i<10;i++)
	{
		Insert(i,L,P->Next);
		P = P->Next;
	}
	DeleteList(L);
	P = L;
	while(P = P->Next)
	{
		printf("%p\t%d\t%p\n",P,P->Element,P->Next);		
	}
	
	return 0;
}
