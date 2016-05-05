//============================================================================
// Name        : Ejercicio44.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Trabajo practico
//============================================================================



#include <iostream>
using namespace std;

float calcularPorcentajeDiferencia(long &, long &);

int main() {

	long num1, num2;
	cout << "Ingrese dos valores numericos" << endl;
	cin >> num1 >> num2;

	calcularPorcentajeDiferencia(num1, num2);
	return 0;

}

float calcularPorcentajeDiferencia(long &a, long &b){
	int calculo;

	calculo = (b - a) * 100 / (a + b);
	cout << calculo << endl;

}
