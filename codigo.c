#include<stdio.h>

void imprime(float v1[], float v2[], float v3[])
{
	int i;

		printf("\n");

		for(i=0; i<4; i++)
			{
			printf("%.1f \t", v1[i]);
			}

				printf("\n");

		for(i=0; i<4; i++)
			{
			printf("%.1f \t", v2[i]);
			}

				printf("\n");

		for(i=0; i<4; i++)
			{
			printf("%.1f \t", v3[i]);
			}

				printf("\n");

}

main() {

int i;
float K;
float x1, x2, x3, x4;

	float m1[5], m2[5], m3[5], m4[5], ma[5], ma1[5];


		for(i=0; i<4; i++)
			{
				printf("digite os valores da primeira linha na posição [%d]: ", i);
				scanf("%f", &m1[i]);
			}

			printf("\n");

		for(i=0; i<4; i++)
			{
				printf("digite os valores da segunda linha na posição [%d]: ", i);
				scanf("%f", &m2[i]);
			}

			printf("\n");

		for(i=0; i<4; i++)
			{
				printf("digite os valores da terceira linha na posição [%d]: ", i);
				scanf("%f", &m3[i]);
			}

			printf("\n");


imprime(m1,m2,m3);


printf("pivoteamento\n");
printf("\n");

        if(m1[0]<m2[0])
        {
                for(i=0; i<4; i++)
                {
                        ma1[i]=m1[i];
                        m1[i]=m2[i];
			m2[i]=ma1[i];
		}
	}

imprime(m1,m2,m3);

printf("triangularização \n");

if(m1[0]!=0)
{

		K=(m2[0]/m1[0]);

		for(i=0; i<4; i++)
			{
				m2[i]=m2[i]-K*m1[i];
			}

}
else
{
		for(i=0; i<4; i++)
		{
				ma[i]=m1[i];
		}

		for(i=0; i<4; i++)
		{
				m1[i]=m2[i];
				m2[i]=ma[i];
		}

}

imprime(m1,m2,m3);

printf("pivoteamento \n");

        if(m1[0]<m3[0])
        {
                for(i=0; i<4; i++)
                {
                        ma1[i]=m1[i];
                        m1[i]=m3[i];
                        m3[i]=ma1[i];
                }
        }

imprime(m1,m2,m3);

printf("triangularização 2 \n");

if(m3[0]!=0)
{
		K=(m3[0]/m1[0]);

		for(i=0; i<5; i++)
			{
				m3[i]=m3[i]-K*m1[i];
			}
}
else
{
}



imprime(m1,m2,m3);

printf("pivoteamento \n");

        if(m2[1]<m3[1])
        {
                for(i=0; i<4; i++)
                {
                        ma1[i]=m2[i];
                        m2[i]=m3[i];
                        m3[i]=ma1[i];
                }
        }

imprime(m1,m2,m3);

printf("triangularização 3 \n");

if(m2[1]!=0)
{

		K=(m3[1]/m2[1]);

		for(i=0; i<4; i++)
			{
				m3[i]=m3[i]-K*m2[i];
			}
}
else
{
		for(i=0; i<4; i++)
		{
				ma[i]=m2[i];
		}

		for(i=0; i<4; i++)
		{
				m2[i]=m3[i];
				m3[i]=ma[i];
		}
}


imprime(m1,m2,m3);


printf("Resolvendo o sistema temos que:\n");

x3=(m3[3])/(m3[2]);
x2=(((m2[3])-(m2[2]*x3))/(m2[1]));
x1=(((m1[3])-(m1[2]*x3)-(m1[1]*x2))/(m1[0]));


printf("x1 = %.1f \n ", x1);
printf("x2 = %.1f \n ", x2);
printf("x3 = %.1f \n ", x3);


}
