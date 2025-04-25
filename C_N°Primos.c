#include <stdio.h>
#include <stdbool.h>

// Función para verificar si un número es primo
bool esPrimo(int numero) {
	// Verificar si el número es menor o igual a 1
	if (numero <= 1) {
		return false;
	}
	// Iterar desde 2 hasta la raíz cuadrada del número
	for (int i = 2; i * i <= numero; i++) {
		if (numero % i == 0) { // Verificar divisores
			return false;
		}
	}
	return true;
}

int main() {
	int estado = true; // Definir estado como verdadero
	printf("El estado es verdadero\n"); // Imprimir mensaje sobre el estado
	
	int numero; // Declarar la variable para el número
	printf("Ingresa un número entero positivo (0 para salir): ");
	
	// Ciclo para leer números hasta que se ingrese un 0
	while (scanf("%d", &numero) && numero != 0) {
		if (numero < 0) {
			printf("Por favor, ingresa un número positivo.\n");
		} else if (esPrimo(numero)) {
			printf("El número %d es primo\n", numero);
		} else {
			printf("El número %d no es primo\n", numero);
		}
	}
	
	return 0; // Finalizar el programa
}

