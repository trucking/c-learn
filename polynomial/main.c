#include <stdio.h>
#include <stdlib.h>
#include "polynomial.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Node
{
	int Coefficient;
	int Exponent;
	PtrToNode Next;	
};
int main(int argc, char *argv[]) 
{	
	
	Polynomial a1,b1;
	a1 = ZeroPolynomial;
	b1 = ZeroPolynomial;
	AddPolynomial(a1,b1);
	
	return 0;
}
