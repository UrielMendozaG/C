//https://omegaup.com/arena/OMIJALONLINE1/#problems/Supersticion
#include <iostream>
using namespace std;

int main() {
    int x;
    
    cin >> x;
    
    if(x % 2 == 0){
        std::cout << "SI" << std::endl;
    }else{
        std::cout << "DEJARLO PASAR" << std::endl;
    }
    
    return 0;
}