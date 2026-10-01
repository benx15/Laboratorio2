#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Introduzca un numero: ";
	cin >> a;
	cout << "Introduzca otro numero: ";
	cin >> b;
	int p = 0;
	int cont = 0;
	
	while (cont<b) {
		p = p + a;
		cont++;
	};
	cout << "El resultado es: " << p;
	
	return 0;
}