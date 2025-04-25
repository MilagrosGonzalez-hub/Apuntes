#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int numeroSecreto, intento, intentosRestantes, jugarDeNuevo;
	int victorias = 0, juegos = 0; // Contadores para partidas jugadas y victorias
	char respuesta;
	
	// Inicializar la semilla para generar números aleatorios
	srand(time(NULL));
	
	do {
		numeroSecreto = rand() % 100 + 1; // Genera un número entre 1 y 100
		intentosRestantes = 7; // Reiniciar intentos al iniciar un nuevo juego
		printf("\n¡Un número entre 1 y 100 ha sido generado!\n");
		
		juegos++; // Incrementa las partidas jugadas
		
		// Comienza el bucle de intentos
		while (intentosRestantes > 0) {
			printf("Te quedan %d intentos. Ingresa tu número: ", intentosRestantes);
			scanf("%d", &intento);
			
			if (intento == numeroSecreto) {
				printf("¡Adivinaste! El número secreto era %d.\n", numeroSecreto);
				victorias++; // Incrementa las victorias
				break;
			} else if (intento > numeroSecreto) {
				printf("Muy alto.\n");
			} else {
				printf("Muy bajo.\n");
			}
			
			intentosRestantes--;
		}
		
		// Si se acabaron los intentos sin adivinar
		if (intentosRestantes == 0) {
			printf("Lo siento, no adivinaste. El número secreto era %d.\n", numeroSecreto);
		}
		
		// Preguntar si desea jugar de nuevo
		printf("¿Quieres jugar otra vez? (s/n): ");
		scanf(" %c", &respuesta); // Espacio antes de %c para evitar problemas con el buffer
	} while (respuesta == 's' || respuesta == 'S');
	
	// Mostrar resultados finales
	printf("\nPartidas jugadas: %d\n", juegos);
	printf("Partidas ganadas: %d\n", victorias);
	printf("Gracias por jugar. ¡Hasta la próxima!\n");
	
	return 0;
}

