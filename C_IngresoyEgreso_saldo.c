#include <stdio.h>
int main() {
	int saldo=10000;
	int opcion, ingreso, egreso;
	
	printf("menu de opciones\n");
	printf("su saldo es de 10000\n");
	printf("1-ingresar dinero\n");
	printf("2-retirar dinero\n");
	
	scanf("%d", &opcion);
	
	switch(opcion){
	case 1:
		printf("ingrese la cantidad: ");
		scanf("%d" , &ingreso);
		printf("haz ingresado %d" ,ingreso);
		printf("su saldo actual es %d" ,saldo + ingreso);
		break;
		
		
	case 2:
		printf("ingrese la cantidad: ");
		scanf("%d" , &egreso);
		printf("haz ingresado %d" ,egreso);
		printf("su saldo actual es %d" ,saldo - egreso);
		break;
	default:
		printf("opcion invalida");
	}
	
	return 0;
}

