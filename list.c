#include "list.h"

struct Node
{
	ElementType Element;
	Position Next;
};

List MakeEmpty(List L)
{
	L = malloc(sizeof(struct Node));
	L->Element = 0;
	L->Next = 0;
	return L;
}

int IsEmpty(List L)
{
	return L->Next == 0;
}

int IsLast(Position P,List L)
{
	return P->Next == 0;
}

Position Find(ElementType X,List L)
{
	Position P;
	P = L->Next;
	while(P != 0 && P->Element != X)
	{
		P = P->Next;
	}
	return P;
}

void Delete(ElementType X,List L)
{
	Position P,TmpCell;
	P = FindPrevious(X,L);
	if(!IsLast(P,L))
	{
		TmpCell = P->Next;
		P->Next = TmpCell->Next;
		free(TmpCell);
	}
}

Position FindPrevious(ElementType X,List L)
{
	Position P;
	P = L;
	while(P->Next != 0 && P->Next->Element != X)
	{
		P = P->Next;
	}
	return P;
}

void Insert(ElementType X,List L,Position P)
{
	Position TmpCell;
	TmpCell = malloc(sizeof(struct Node));
	if(TmpCell == 0)
	{
		printf("Out of space!!!");
	}
	TmpCell->Element = X;
	TmpCell->Next = P->Next;
	P->Next = TmpCell;
}

void DeleteList(List L)
{
	Position P,Tmp;
	P = L->Next;
	L->Next = 0;
	while(P != 0)
	{
		Tmp = P->Next;
		free(P);
		P = Tmp;
	}
}
