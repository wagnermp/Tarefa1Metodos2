#include<stdio.h>

void imprime(float v1[], float v2[], float v3[], float v4[])
{
	int i;

		printf("\n");

		for(i=0; i<5; i++)
			{
			printf("%.1f \t", v1[i]);
			}

				printf("\n");

		for(i=0; i<5; i++)
			{
			printf("%.1f \t", v2[i]);
			}

				printf("\n");

		for(i=0; i<5; i++)
			{
			printf("%.1f \t", v3[i]);
			}

				printf("\n");

		for(i=0; i<5; i++)
			{
			printf("%.1f \t", v4[i]);
			}

				printf("\n");
}

main() {

int i;
float K;
float x1, x2, x3, x4;

	float m1[5], m2[5], m3[5], m4[5], ma[5];


		for(i=0; i<5; i++)
			{
				printf("digite os valores da primeira linha na posição [%d]: ", i);
				scanf("%f", &m1[i]);
			}

			printf("\n");

		for(i=0; i<5; i++)
			{
				printf("digite os valores da segunda linha na posição [%d]: ", i);
				scanf("%f", &m2[i]);
			}

			printf("\n");

		for(i=0; i<5; i++)
			{
				printf("digite os valores da terceira linha na posição [%d]: ", i);
				scanf("%f", &m3[i]);
			}

			printf("\n");

		for(i=0; i<5; i++)
			{
				printf("digite os valores da quarta linha na posição [%d]: ", i);
				scanf("%f", &m4[i]);
			}

			printf("\n");

imprime(m1,m2,m3,m4);


}
