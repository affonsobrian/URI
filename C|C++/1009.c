#include <stdio.h>

int main()
{
	//Var
	char nome[15];
	double fixo,vendas,total;
	scanf("%s %lf %lf",&nome,&fixo,&vendas);
	total=fixo+(vendas*15/100);
	printf("TOTAL = R$ %.2lf\n",total);

	return 0;
}
