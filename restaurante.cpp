#include<stdio.h>
#include<stdlib.h>
#include<string.h>					

void Llenar (); //funcion

char Comida [3][10];
char Bebidas [3][10];
int Mesa = 0;
float Total;
float cantidad[3];


int main()			//The less I know
{
	int ciclo;
	
	printf("Platillos\n Tacos 10$cu \t Torta 30$\t Piña$5\n");
	printf("Bebidas\n Coca\t RedBull\t Cerveza\n\n");
	
	
	Llenar();
	
	return 0;
}

void Llenar ()
{	
	printf("Que Mesa\n");
	//leer
	scanf("%d",&Mesa);
	
	//Leer
	for(int i = 0; i<3; i++){
		printf("Ingresa una comida\n");
		scanf("%s",&Comida[i]);
		printf("ingresa la cantidad\n");
		scanf("%f",&cantidad[i]);
	}
	
	/*
	printf("Ingresa tres bebidas\n");
	//leer
	for(int i = 0; i<3; i++){
	scanf("%s",&Bebidas[i]);
	}
	*/
	
	
	/*
	comparamos precios y le sumamos al total
	*/
	
	for(int i = 0; i<3; i++){
		if(strcmp(Comida[i], "tacos") == 0){
			Total = Total + (10*cantidad[i]);
			
		}
		
		if(strcmp(Comida[i],"torta") == 0){
			Total = Total + (30*cantidad[i]);
			
		}
		
		if(strcmp(Comida[i],"pina") == 0){
			Total = Total + (5*cantidad[i]);
			
		}
		
		
	}
	
	printf("%f",Total);
	
	
}
