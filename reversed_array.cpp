#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	//imprimir el arreglo al reves
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
		
	for(int i = 9; i>=0; i--){
		printf("%d", array[i]);
		printf("%s", " ");
	}
	
	return 0;
}

