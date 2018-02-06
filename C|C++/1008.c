#include <stdio.h>

int main()
{
    //Var
    int numero,horas;
    double valor,salario;
    //Entrada
    scanf("%i %i %lf",&numero,&horas,&valor);
    //Processamento
    salario=horas*valor;
    //Saida
    printf("NUMBER = %i\nSALARY = U$ %.2lf\n",numero,salario);
    return 0;
}

