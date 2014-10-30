#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int numero = 1;
	int factorial =1;
	int i;
	
	cout<<"Escribe un numero para encontrar su factorial:"<<endl;
	cin>>numero;
	
	for(i=1; i<=numero;i++)
	{
		//La variable factorial va a estar multiplicando mientras sea menor o igual que  numero
		//En la primer vuelta  1 * 1 = 1
		//En la segunda vuelta 1 * 2 = 2
		//En la tarcera vuelta 2 * 3 = 6 
		//Y continua así hasta que la condición se respete		
		factorial=factorial*i;
	}
	
	cout<<"El factorial de "<<numero<<" es "<<factorial<<endl;
	cout<<"Ya vete por una cerveza..."<<endl;	
	return 0;
}
