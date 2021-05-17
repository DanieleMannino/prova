//Programma che esegue il prodotto di tre numeri interi
#include <iostream>
using namespace std;

int main() {
	
	int x;
	int y;
	int z;
	int result;
	
	cout << "Inserisci tre numeri interi : ";
	cin >> x >> y >> z;
	
	result = x * y * z;
	cout << "Il prodotto e' " << result << endl;
	
	return 0;
}
