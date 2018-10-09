/*Faça um algoritmo que leia um número inteiro e mostre uma mensagem indicando
se é positivo ou negativo.*/
#include <stdlib.h>
#include <stdio.h>

int main()
{	
	//numero positivo > 0
	//numero negativo < 0

	int numerodigitado;
	
	printf("\nDigite um numero:");
	scanf("%d", &numerodigitado);

	if (numerodigitado < 0)
	{
		printf("\nO numero digitado e negativo!");
	}else if (numerodigitado > 0)
	{
		printf("\nO numero digitado e positivo!");
	}else{
		printf("O numero e neutro!");
	}

	system("pause");

	return 0;
}