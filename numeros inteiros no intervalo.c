#include <stdio.h>

int main ()
{
	int a, b, atual;
	
	printf ("Entre com dois valores inteiros, em ordem crescente: ");
	scanf ("%d %d", &a, &b);
	
	printf ("Os valores inteiros no intervalo sao: \n");
	atual = a;
	
	while (atual <= b)
	{
		printf ("%d", atual);
		atual++;
	}
	printf ("\n\n");
	return 0;
}
