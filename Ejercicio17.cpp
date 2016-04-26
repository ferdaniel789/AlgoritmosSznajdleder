//============================================================================
// Name        : Ejercicio17.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Trabajo practico
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {

	FILE * fechas;	
	int i, j, k, l, m, n = 0;
	fechas = fopen("dates.txt", "r+");

	while(!feof(fechas)){

		fscanf(fechas , "%d %d %d %d %d %d", &i, &j, &k, &l, &m, &n);
				}
	

	fclose(fechas);

	printf("Hola %d %d %d %d %d %d", i, j, k, l, m, n);

	
	return 0;
}



