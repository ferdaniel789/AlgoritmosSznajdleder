//============================================================================
// Name        : Ejercicio6.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Trabajo practico
//============================================================================

#include <iostream>
using namespace std;

// PROTOTIPOS
void min(int,int,int);
void max(int,int,int);

int main() {
	
	int a, b, c;
	cout << "Ingrese tres valores numericos diferentes" << endl;
	cin >> a >> b >> c;

	if(a > b and a > c){
		if(b > c){

			cout << "El mayor es: " << a << endl;
			cout << "El del medio es: " << b << endl;
			cout << "El menor es: " << c << endl;

			}else{ 
				if(c > b){
					cout << "El mayor es: " << a << endl;
					cout << "El del medio es: " << c << endl;
					cout << "El menor es: " << b << endl;
						}
					
				}
						}else{
							if(b > a and b > c){
								if(a > c){
									cout << "El mayor es: " << b << endl;
									cout << "El del medio es: " << a << endl;
									cout << "El mayor es: " << c << endl;
										}else{
											if(c > a){
												cout << "El mayor es: " << b << endl;
												cout << "El del medio es: " << c << endl;
												cout << "El menor es: " << a << endl;
													}

											}
												}else{
													if(c > a and c > b){
														if(a > b){
															cout << "El mayor es: " << c << endl;
															cout << "El del medio es: " << a << endl;
															cout << "El menor es: " << b << endl;

														}else{
															if(b > a){
																cout << "El mayor es: " << c << endl;
																cout << "El del medio es: " << b << endl;
																cout << "El menor es: " << a << endl;
															}
														}

													}
												}
						}

					
					

	return 0;
}
