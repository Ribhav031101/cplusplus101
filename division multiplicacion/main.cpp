#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int menu;
	int i;
	
	//division
	double dividendo;	
	double divisor;
	
	//multiplicacion
	double multiplicando;
	double multiplicador;
	double producto;
	
	cout<< "Para division selecciona la opcion 1, para multiplicacion selecciona la opcion 2";
	cin >> menu;
	
	switch(menu) {
		case 1 :
			cout << "Elegiste hacer una division" << endl;
			cout << "Ingresa el dividendo (numero que quieres dividir)" << endl;
			cin >> dividendo;
			
			cout << "Ingresa el divisor (numero por el cual vas a dividir)" << endl;
			cin >> divisor;
			
			// i debe iniciar en 0, ya que si se inicializa en 1, suma 1 al resultado de la operación al final del ciclo
			for (i= 0; dividendo != 0; i++)
			{
				dividendo = dividendo-divisor;
			} 
			
			cout << "El resultado es " << i <<endl;
			break;
			
		case 2 :
			cout << "Elegiste hacer una multiplicacion" <<endl;
			cout << "Ingresa el multiplicando (numero que quieres multiplicar)" << endl;
			cin >> multiplicando;
			
			cout << "Ingresa el multiplicador (numero por el cual vas a multiplicar)" << endl;
			cin >> multiplicador;
			
			// i debe iniciar en 1, ya que si se inicializa en 0, hace un ciclo más haciendo una suma extra 
			//i.e: X[7 * 6 = 49]  C[7 * 6 = 42] 
			for (i=1; i <= multiplicador; i++)
			{
				producto = producto+multiplicando;
			}
			
			cout <<"El resultado es " << producto << endl;
			break;
	}
	
	
	return 0;
}
