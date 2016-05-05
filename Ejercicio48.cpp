//============================================================================
// Name        : Ejercicio48.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Trabajo practico
//============================================================================

#include <iostream>
using namespace std;

bool esPrimo(int );

int main() {

int num1;
cout << "Ingrese numero para determinar si es primo" << endl;
cin >> num1;

esPrimo(num1);

return 0;
}

bool esPrimo(int n){
	int num2, cont;
	int i = 1;
	while(i <= n){
		num2 = n % i;
		if(num2 == 0){
			cont++;
		}
		i++;
	}

	if(cont == 2){
		n = true;
	}else{
		n = false;
	}

	cout << n << endl;
}

