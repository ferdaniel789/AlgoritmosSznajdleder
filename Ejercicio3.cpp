//============================================================================
// Name        : Ejercicio3.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Trabajo practico
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	int a;
	int quinta, resto, septima; //quinta parte, resto de division y septima parte
	cout << "Ingrese un valor numerico" << endl;
	cin >> a;

	quinta = a / 5;
	resto = a % 5;
	septima = quinta / 7;

	cout << "Quinta parte: " << quinta << endl << "Resto de la division por 5: " << resto 		<< endl << "Septima parte de la quinta parte: " << septima << endl;

	cout << "hello world";	

	return 0;
}
