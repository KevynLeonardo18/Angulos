#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int i, a, x;
	
    printf("\nDeteccion de triangulos (por angulos).\n\n");
	a = 0;
	
	for(i=0; i<3; i++){
	
		printf("Ingresa el angulo %i: ", i+1);
		scanf("%i%*c", &x);
		
		a += x;
		
	}
	
	if (a == 180){
		printf("Los angulos ingresados, pueden formar un triangulo.\n");
	}else{
		printf("Los angulos ingresados, no pueden formar un triangulo.\n");
	}
	
	system("pause");
	return 0;
}
