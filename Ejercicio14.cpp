//============================================================================
// Name        : Ejercicio14.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Trabajo practico
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int a, b, i, c;

	cout << "Ingrese dos valores numericos" << endl;
	cin >> a >> b;

	i = 0;
	c = 0;

	while(i < b){

		c = c + a;
		i++;
	}

	cout << "El producto entre ambos es: " << c << endl;
	
	return 0;
}



