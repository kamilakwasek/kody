/*
 * dodaj_liczby.cpp

 */


#include <iostream>       // ALGORYTM LINIOWY !!!!!

using namespace std;  

int main(int argc, char **argv) {
	//int liczba1;  // deklaracja zmiennej całkowitej 
	//int liczba2; 
	float liczba1;
	float liczba2;
	liczba1 = 0;   // inicjacja zmiennej = przypisanie wartości 
	liczba2 = 0;
	cout << "Podaj pierwszą liczbę całkowitą: ";
	cin >> liczba1;
	cout << "Podaj drugą liczbę całkowitą: ";
	cin >> liczba2;          // operator wejścia
	cout << liczba1 << " " << liczba2 << endl;         // print, end of line
	cout << "Suma: " << liczba1 + liczba2;
	return 0;
}

