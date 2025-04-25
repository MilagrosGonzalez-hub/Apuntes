#include <stdio.h>

int main() {
	char nombre[50]; // Se usa un arreglo de caracteres para almacenar el nombre
	int edad; // Variable para almacenar la edad
	float altura; // Cambiamos la altura a tipo float para manejar valores decimales
	
	printf("Ingresa tu nombre: ");
	scanf("%s", nombre); // Lectura de nombre
	
	printf("Ingresa tu edad: ");
	scanf("%d", &edad); // Lectura de edad
	
	printf("Ingrese su altura (en metros): ");
	scanf("%f", &altura); // Lectura de altura como float
	
	printf("\nHola %s, tienes %d años, tienes %.2f metros de altura.\n", nombre, edad, altura); // Se imprime altura con dos decimales
	
	return 0;
}
