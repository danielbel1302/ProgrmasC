/*Dados dos n�meros, mostrar un men� con opciones de sumar, restar o multiplicar dichos n�meros. 
Solicite elegir una opci�n y realizar la operaci�n correspondiente mostrando dicho resultado.*/

#include <stdio.h>

int main(void)
{
	int num1, num2, op;
	printf("Ingrese el primer numero: ");
	scanf("%i",&num1);
	printf("Ingrese el segundo numero: ");
	scanf("%i",&num2);
	printf("-------------Menu-------------\n");
	printf("1. Sumar\n2. Restar\n3. Multiplicar\nOpcion: ");
	scanf("%i",&op);
	printf("-------------Resultado-------------\n");
	if(op==1)
	{
		printf("La suma es: %i", num1+num2);
	}
	else
	{
		if(op==2)
		{
			printf("La resta es: %i", num1-num2);
		}
		else
		{
			printf("La multiplicacion es: %i", num1*num2);
		}
	}
}
