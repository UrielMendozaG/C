// https://omegaup.com/arena/OMIJALONLINE1/#problems/EX-Calificando-a-la-siguiente-et

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
} 

int getResult(int arr[], int position){
    
    // ordenar el arreglo y luego buscar nuestra posicion
    sort(arr, arr+6); 
    // binary search
    
    return binarySearch(arr, 0, 5, position);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a[6];
    bool picked = false;
    int position = 0;
    int resultado = 0;
    
    for(int i=0;i<6;i++){
        cin>>a[i];
        if(picked == false){
            position = a[i];
            picked = true;
        }
    }
    
    resultado = getResult(a, position);
    
    if(resultado >= 3){
        cout<<"Felicidades! Es hora de estudiar mas para el siguiente";
    }else{
        cout<<"Aun ocupas estudiar mas";
    }
    
    return 0;
}