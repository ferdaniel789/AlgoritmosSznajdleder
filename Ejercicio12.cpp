//============================================================================
// Name        : Ejercicio12.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Trabajo practico
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int a;
	cout << "Ingrese edad" << endl;
	cin >> a ;

	if (a <= 12){
		cout << "Usted es menor" << endl;
	}else{
		if (a > 12 and a < 19){
			cout << "Usted es cadete" << endl;
		}else{
			if (a > 18 and a <= 26){
				cout << "Usted es juvenil" << endl;
			}else{
				cout << "Usted es mayor" << endl;
			}
		}
	}

	
	
	return 0;
}



