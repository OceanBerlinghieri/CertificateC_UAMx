/*#include <stdio.h>

int main() {
	double euros, dolares = 0;

	printf("Intruduzca cantidad en dolares: ");
	scanf_s("%lf", &dolares, 256);					//scanf_s permite especificar el tama�o del array de manera que no llegue a producirse buffer overflow,
													//limitando la lectura a los caracteres especificados. Una func��n parecida es fgets()
																			//fgets(*char array, maxCount, fuente)
	euros = dolares * 0.859;

	printf("%lf dolares son %lf euros.\n", dolares, euros);
	return 0;
}*/