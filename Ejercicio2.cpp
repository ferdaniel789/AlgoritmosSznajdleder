//============================================================================
// Name        : Ejercicio2.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-free software
// Description : Trabajo Practico
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	int a, b;
	int cociente;

	cout << "Ingrese dos valores numericos" << endl;
	cin >> a >>b;

	if(b != 0){

		cociente = a / b;
		cout << "Cociente: " << cociente << endl;
	}else{
		cout << "Error: denominador igual a 0" << endl;
	}
	

	return 0;
}