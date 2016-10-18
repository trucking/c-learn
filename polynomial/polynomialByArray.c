//多项式的数组定义 
int MaxDegree = 10;
typedef struct
{
	int CoeffArray[MaxDegree + 1];
	int HighPower;
} *Polynomial;
//将多项式初始化为0的过程 
void ZeroPolymial(Polynomial Poly)
{
	int i;
	for(i=0;i<=MaxDegree;i++)
	{
		Poly->CoeffArray[i] = 0;		
	}
	Poly->HighPower = 0;
}
//两个多项式相加的过程
void AddPolynomial(const Polynomial Poly1,const Polynomial Poly2,Polynomial PolySum)
{
	int i;
	ZeroPolynomial(PolySum);
	PolySum->HighPower = Max(Poly1->HighPower,Poly2->HighPower);
	for(i=PolySum->HighPower;i>=0;i--)
	{
		PolySum->CoeffArray[i] = Poly1->CoeffArray[i] +Poly2->CoeffArray[i];
	}
}
//两个多项式相乘的过程
void MultPolyNomial(const Polynomial Poly1,const Polynomial Poly2,Polynomial PolyProd)
{
	int i,j;
	ZeroPolynomial(PolyProd);
	PolyProd->HighPower = Poly1->HighPower + Poly2->HighPower;
	if(PolyProd->HighPower > MaxDegree)
	{
		printf("Exceeded arry size!\n");
	}else{
		for(i=0;i<=Poly1->HighPower;i++)
		{
			for(j=0;j<=Poly2->HighPower;j++)
			{
				PolyProd->CoeffArray[i+j] += Poly1->CoeffArray[i] * Poly2->CoeffArray[j];
			}
		}
	}
	
} 
