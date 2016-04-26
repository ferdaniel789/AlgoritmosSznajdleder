//============================================================================
// Name        : Ejercicio16.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Trabajo practico
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int a, i, k, suma, promedio, suma2;
	i = 0;
	suma = 0;
	k = 0;
	suma2 = 0;

	cout << "Ingrese 50 numeros enteros" << endl;


	while(i < 50){
		cin >> a;
		i++;

		if(a > 100){
		
			suma = suma + a;
			k++;
		}

		if(a < -10){
			suma2 = suma2 + a;
		}
		
	}

	promedio = suma / k;


	cout << "Promedio mayores de 100 es : " << promedio << endl;
	cout << "Suma de menores de -10 : " << suma2 << endl;


	
	return 0;
}



