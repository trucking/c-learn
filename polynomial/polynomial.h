#ifndef _POLYNOMIAL_H
#define _POLYNOMIAL_H
typedef struct Node *PtrToNode;
typedef PtrToNode Polynomial;
Polynomial ZeroPolynomial(Polynomial Poly);
void AddPolynomial(const Polynomial Poly1,const Polynomial Poly2);
void MultPolynomial(const Polynomial Poly1,const Polynomial Poly2);
Polynomial hebing(Polynomial P);
void echoPoly(Polynomial P);
#endif
