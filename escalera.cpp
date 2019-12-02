#include <iostream>
using namespace std;

// imprimir 
// 
// **** 
//  *** 
//   ** 
//    * 
int main(int argc, char *argv[]) {
		
	int n = 0;
	
	cin>>n;
	
	for(int i = 0; i<n; i++){
		
		for(int z = 0; z<=i-1; z++)
			if(i > 0) cout<<" ";
		
		for(int j = i; j<n; j++)
			cout<<"*";
	
		cout<<""<<endl;
	}
	
	return 0;
}

