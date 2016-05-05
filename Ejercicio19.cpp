//============================================================================
// Name        : Ejercicio19.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Trabajo practico
//============================================================================



#include <iostream>
using namespace std;

int main() {

	int a, i, resto, cinco;
	int b = 0;

	cout << "Ingrese un valor numerico" << endl;
	cin >> a;

	while(b < a){

		b = b + 1;
		resto = b % 3;
		cinco = b % 5;

		if(resto == 0 and cinco != 0){
			cout << "Este es el resultado: " << b << endl;

		}
		}
		


	return 0;
}



