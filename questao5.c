#include <stdio.h>
#include <stdlib.h>



int main()
{
	char sexo[10];
	float altura[10];

	int opcao,i,contadorM,contadorF;

	float mediaF = 0.0, mediaM = 0.0, maior, menor;
	char x1,x2;

	do
	{
		system("cls");
		printf("Digite de 1 a 6 para: ");
		printf("\n--------------------------------");
		printf("\n1 - Inserir valores");
		printf("\n2 - Maior e Menor Altura ");
		printf("\n3 - Media de Altura Sexo F");
		printf("\n4 - Media de Altura Sexo M");
		printf("\n5 - Numero de pessoas por Sexo");
		printf("\n6 - Sair");
		printf("\n--------------------------------");
		printf("\nESCOLHA:  ");
		scanf("%i",&opcao);

		switch(opcao)
		{
			case 1:
				for(i = 0; i < 10; i++)
				{
					printf("\n * Digite o Sexo (F ou M) da pessoa (%i/10): ",i+1);
					scanf("%s",&sexo[i]);
					printf("\n   Digite a Altura da pessoa (%i/10): ",i+1);
					scanf("%f",&altura[i]);
				}
			break;

			case 2:

                menor = altura[0];
				x1 = sexo[0];
				maior = altura[0];
				x2 = sexo[0];
				for(i = 1; i < 10; i++)
					{
						if(altura[i] > maior)
						{
							maior = altura[i];
							x1 = sexo[i];
						}
						else if(altura[i] < menor)
						{
							menor = altura[i];
							x2 = sexo[i];
						}
					}
					printf("\nMaior: %.2f m - Sexo: %c\nMenor: %.2f m - Sexo: %c\n\n",maior,x1,menor,x2);
			break;

			case 3:
				contadorF = 0;
				for(i = 0; i < 10; i++)
					{
						if(sexo[i] == 'f' )
						{
							mediaF = mediaF + altura[i];
							contadorF++;
						}
					}
					mediaF = mediaF / contadorF;
					printf("A media de Altura do sexo F: %.2f m\n",mediaF);

			break;

			case 4:

				    contadorM = 0;
					for(i = 0; i < 10; i++)
					{
						if(sexo[i] == 'm' )
						{
							mediaM = mediaM + altura[i];
							contadorM++;
						}
					}
					mediaM = mediaM / contadorM;
					printf("A media de Altura do sexo M: %.2f m\n",mediaM);
			break;

			case 5:
					printf("\nNumero do sexo Masculino: %i\n",contadorM);
					printf("\nNumero do sexo Feminino: %i\n",contadorF);
			break;

			default:
				printf("\nOpcao Invalida\n");


		}
		system("pause");
	}while(opcao != 6);
}
