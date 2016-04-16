//============================================================================
// Name        : Ejercicio8.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Trabajo practico
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	int fecha, anio, mes, dia, restoanio, restomes;
	cout << "Ingrese fecha con formato aaaammdd (8 digitos)" << endl;
	cin >> fecha;

	anio = fecha / 10000;
	restoanio = fecha % 10000;

	mes = restoanio / 100;
	restomes = restoanio % 100;

	dia = restomes;

	cout << "Dia: " << dia << " Mes: " << mes << " Año: " << anio << endl;



	return 0;
}
