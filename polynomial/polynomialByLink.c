#include "polynomial.h"
struct Node
{
	int Coefficient;
	int Exponent;
	PtrToNode Next;	
};

Polynomial ZeroPolynomial(Polynomial Poly)
{
	Poly = malloc(sizeof(PtrToNode));
	Poly->Coefficient = 0;
	Poly->Exponent = 0;
	Poly->Next = 0;
}

void AddPolynomial(const Polynomial Poly1,const Polynomial Poly2)
{
	Polynomial PolySum = ZeroPolynomial(PolySum);
	Polynomial P1,P2;
	P1 = Poly1;
	P2 = Poly2;
	while(P1->Next && P2->Next)
	{
//		if(P1->Exponent > P2->Exponent){
//			PolySum->Coefficient = P1->Coefficient;
//			PolySum->Exponent = P1->Exponent;
//			P1 = P1->Next; 
//		}
//		if(P1->Exponent == P2->Exponent){
//			PolySum->Coefficient = P1->Coefficient + P2->Coefficient;
//			PolySum->Exponent = P1->Exponent;
//			P1 = P1->Next;
//			P2 = P2->Next;
//		}
//		if(P1->Exponent < P2->Exponent){
//			PolySum->Coefficient = P2->Coefficient;
//			PolySum->Exponent = P2->Exponent;
//			P2 = P2->Next;
//		}
		Polynomial P;
		P = ZeroPolynomial(P);
		PolySum->Next = P;
	}
//	echoPoly(PolySum);
}

void MultPolynomial(const Polynomial Poly1,const Polynomial Poly2)
{
	Polynomial PolyProd;
	PolyProd = ZeroPolynomial(PolyProd);
	Polynomial P1 = Poly1;
	Polynomial P2 = Poly2;
	Polynomial P3;
	P3 = ZeroPolynomial(P3);
	PolyProd->Coefficient = P1->Coefficient * P2->Coefficient;
	PolyProd->Exponent = P1->Exponent + P2->Exponent;
	PolyProd->Next = P3;
	while(P1 = P1->Next)
	{
		while(P2 = P2->Next)
		{
			P3->Coefficient = P1->Coefficient * P2->Coefficient;
			P3->Exponent = P1->Exponent + P2->Exponent;
			Polynomial TmpP;
			TmpP = ZeroPolynomial(TmpP);
			P3 = TmpP->Next;			
		}
	}
	PolyProd = hebing(PolyProd);
	echoPoly(PolyProd);	
}

Polynomial hebing(Polynomial P)
{
	Polynomial result = P;
	while(P->Next){
		Polynomial TmpP = P->Next;
		while(TmpP->Next){
			if(P->Exponent == TmpP->Exponent){
				P->Coefficient += TmpP->Coefficient;
			}
			TmpP = TmpP->Next;
		}
		P = P->Next;	
	}
	return result;	
}

void echoPoly(Polynomial P)
{
	while(P)
	{
		if(P->Next){
			printf("%dX^%d + ",P->Coefficient,P->Exponent);
		}else{
			printf("%dX^%d",P->Coefficient,P->Exponent);
		}		
		P = P->Next;
	}
}
