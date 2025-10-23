/*Dados un mes y un año (que se ingresan por teclado) informar cuántos días tiene el mes.*/

#include <stdio.h>

int main(void)
{
	int mes, anio;
	printf("Ingrese un mes del anio (1 a 12): ");
	scanf("%i",&mes);
	printf("Ingrese un anio (AAAA): ");
	scanf("%i",&anio);
	if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
		printf("El mes para el anio ingresado tiene 31 dias.");
	}
	else
	{
		if(mes!=2)
		{
			printf("El mes para el anio ingresado tiene 30 dias.");
		}
		else
		{
			if(anio%4==0){
				printf("El mes para el anio ingresado tiene 29 dias.");
			}
			else
			{
				printf("El mes para el anio ingresado tiene 28 dias.");
			}
		}
	}
	return 0;
}
