//����ʽ�����鶨�� 
int MaxDegree = 10;
typedef struct
{
	int CoeffArray[MaxDegree + 1];
	int HighPower;
} *Polynomial;
//������ʽ��ʼ��Ϊ0�Ĺ��� 
void ZeroPolymial(Polynomial Poly)
{
	int i;
	for(i=0;i<=MaxDegree;i++)
	{
		Poly->CoeffArray[i] = 0;		
	}
	Poly->HighPower = 0;
}
//��������ʽ��ӵĹ���
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
//��������ʽ��˵Ĺ���
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
