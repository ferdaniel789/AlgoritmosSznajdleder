//============================================================================
// Name        : Ejercicio20.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Trabajo practico
//============================================================================



#include <iostream>
using namespace std;

int main() {
	
	int a, aux = 0;
	int i = 0;

	cout << "Ingrese 10 valores numericos" << endl;
	while(i < 10){
		
		cin >> a;
		
		if(a > aux){
			aux = a;

		}


		i++;

	}

	cout << "El valor maximo es: " << aux << endl;



	return 0;
}



