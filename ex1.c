/*Faça um algoritmo que leia um número inteiro e mostre uma mensagem indicando
se este número é par ou ímpar.*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int par;
	int impar;
	int numerodigitado;
	int restodonumerodigitado;

	printf("\nDigite um numero:");
	scanf("%d", &numerodigitado);

	restodonumerodigitado  = numerodigitado % 2;

	if (restodonumerodigitado == 0)
	{
		printf("\nO numero digitado é par!");
	}else if (restodonumerodigitado == 1)
	{
		printf("\nO numero digitado é impar!");
	}

	system("pause");
	
	return 0;
}