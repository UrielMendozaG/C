#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	
	int arreglo[10] = {10,9,8,7,6,5,4,3,2,1};
	int auxiliar = 0;
	
	//bubble sort ascendente
	for(int i = 0; i<10; i++){
		for(int j = 0; j<10-1; j++){
			if(arreglo[j] > arreglo[j+1]){
				//swap
				auxiliar = arreglo[j];
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = auxiliar;
			}
		}
	}
	
	for(int i = 0; i<10; i++){
		printf("%d",arreglo[i]);
		printf("%s"," ");
	}
	
	
	return 0;
}

