//============================================================================
// Name        : Ejercicio1.cpp
// Author      : Daniel Fernandez
// Version     : 
// Copyright   : License-Free Software
// Description : Trabajo practico
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	int a, b;
	int suma, resta, producto;
	cout << "Ingrese dos valores numericos" << endl;
	cin >> a >> b;

	suma = a + b;
	resta = a - b;
	producto = a * b;

	cout << "Suma: " << suma << endl << "Resta: " << resta << endl << "Producto: " << producto << endl;

	return 0;
}