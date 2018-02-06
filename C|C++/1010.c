#include <stdio.h>

int main()
{
	//Var
	double cod1,n1,v1,cod2,n2,v2,total;
	scanf("%lf %lf %lf",&cod1,&n1,&v1);
	scanf("%lf %lf %lf",&cod2,&n2,&v2);
	total=n1*v1+n2*v2;
	printf("VALOR A PAGAR: R$ %.2lf\n",total);

	return 0;
}

