 /*Ler 4 valores (N1, N2, N3 e N4) referentes às quatro notas de um aluno. A seguir, se
a média ponderada com pesos 2,3,4 e 1, para as respectivas provas, for maior ou igual
a 7,0, mostre uma mensagem: "Aluno foi aprovado". Se a nota for inferior a 3,5, mostrar
uma mensagem: "Aluno foi reprovado". Se a média ficou maior que 3,5 e menor que
7,0, fazer a leitura de uma variável (G2) correspondente a nota de G2 e mostrar se o
aluno foi ou não aprovado (se a nota do G2 for maior ou igual a 6,0).*/
#include <stdlib.h>
#include <stdio.h>

int main()
{	
	//numero positivo > 0
	//numero negativo < 0

	float n1, n2, n3, n4, g2, media;
	
	printf("\nDigite a N1 (Peso 2):");
	scanf("%f", &n1);
	printf("\nDigite a N2 (Peso 3):");
	scanf("%f", &n2);
	printf("\nDigite a N3 (Peso 4):");
	scanf("%f", &n3);
	printf("\nDigite a N4 (Peso 1):");
	scanf("%f", &n4);

	//n1 vezes peso2 - n2 vezes peso3...
	media = (n1*2 + n2*3 + n3*4 + n4*1)/(2+3+4+1);

	if (media >= 7.0)
	{
		printf("\nAluno APROVADO!");
	}else if (media < 3.5)
	{
		printf("\nAluno REPROVADO!");
	}else{
		printf("\nQual sua nota G2? ");
		scanf("%f",&g2);
		if (g2 >= 6.0)
		{
			printf("\nAluno APROVADO!");
		}else{
			printf("\nAluno REPROVADO!");
		}

	}

	system("pause");

	return 0;
}