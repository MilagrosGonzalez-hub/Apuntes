#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int puntos = 1;
	int ronda = 1;
	char eleccion;
	int carta;
	
	// Inicializar la semilla para números aleatorios
	srand(time(0));
	
	printf("Bienvenido al juego de Poker Alta-Baja!\n");
	printf("Instrucciones:\n");
	printf("- Adivina si la carta es alta (h) o baja (l)\n");
	printf("- Alta: 8-13, Baja: 1-6\n");
	printf("- Si sale 7, pierdes\n");
	printf("- Los puntos se duplican cada ronda\n\n");
	
	while (1) {
		printf("Ronda %d - Puntos en juego: %d\n", ronda, puntos);
		printf("Elige (h)alta o (l)baja: ");
		scanf(" %c", &eleccion);  // El espacio antes de %c ignora espacios en blanco
		
		// Generar carta aleatoria entre 1 y 13
		carta = rand() % 13 + 1;
		
		if (carta == 7) {
			printf("\n¡Perdiste! Salió el 7.\n");
			printf("Carta final: %d\n", carta);
			printf("Puntos totales acumulados: %d\n", puntos);
			break;
		}
		
		if ((eleccion == 'h' && carta >= 8) || (eleccion == 'l' && carta <= 6)) {
			printf("¡Correcto! La carta fue: %d\n\n", carta);
			puntos *= 2;
			ronda++;
		} else {
			printf("\n¡Incorrecto! La carta fue: %d\n", carta);
			printf("Puntos totales acumulados: %d\n", puntos);
			break;
		}
	}
	
	return 0;
}
