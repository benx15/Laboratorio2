#include <iostream>
#include <cctype>
using namespace std;

int main() {
	char c;
	cout << "Introduce un caracter: ";
	cin >> c;
	if (isalpha(c)) {
		cout << c << " es una letra" << endl;
		if (isupper(c)) {
			cout << c << " es mayuscula";
		}
		else {
			cout << c << " es minuscula";
		}
	}
	else {
		cout << c << " es un numero";
	}

	return 0;
}