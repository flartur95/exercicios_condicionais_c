/* Desenvolva um algoritmo que leia 4 números e calcule o quadrado de cada um
deles. Se o valor resultante do quadrado do terceiro número for maior ou igual a 500,
imprima-o e finalize. Caso contrário, imprima os valores lidos e seus respectivos
quadrados. */

#include <stdlib.h>
#include <stdio.h>

int main()
{	
	//numero positivo > 0
	//numero negativo < 0

	int numerodigitado1;
	int numerodigitado2;
	int numerodigitado3;
	int numerodigitado4;

	
	printf("\nDigite um numero:");
	scanf("%d", &numerodigitado1);

	printf("\nDigite um numero:");
	scanf("%d", &numerodigitado2);

	printf("\nDigite um numero:");
	scanf("%d", &numerodigitado3);

	printf("\nDigite um numero:");
	scanf("%d", &numerodigitado4);

	int numerodigitado1quadrado = numerodigitado1 * numerodigitado1;
	int numerodigitado2quadrado = numerodigitado2 * numerodigitado2;
	int numerodigitado3quadrado = numerodigitado3 * numerodigitado3;
	int numerodigitado4quadrado = numerodigitado4 * numerodigitado4;

	if (numerodigitado3 >= 500)
	{
		printf("\nO numero %d e maior ou igual a 500!", numerodigitado3);
	}else
	{
		printf("\nO 1º numero %d ao quadrado é %d \n\n",numerodigitado1, numerodigitado1quadrado);
		printf("\nO 2º numero %d ao quadrado é %d \n\n",numerodigitado2, numerodigitado2quadrado);
		printf("\nO 3º numero %d ao quadrado é %d \n\n",numerodigitado3, numerodigitado3quadrado);
		printf("\nO 4º numero %d ao quadrado é %d \n\n",numerodigitado4, numerodigitado4quadrado);
	}

	system("pause");

	return 0;
}