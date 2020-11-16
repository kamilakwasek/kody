/*
 * tablice_cw2.cpp
 */


#include <iostream>


using namespace std;

void pobierzliczby(int t[]) {
    int liczba1 = 0;
    for (int i = 0; i<5; i++){
        cout << "Podaj liczbe: ";
        cin >> liczba1;
        t[i] = liczba1;
    }
}

int suma(int t[]){
    float suma = 0;
    for (int i = 0; i<5; i++){
        suma+= t[i];      
    }
    return suma;
}

int main(int argc, char **argv)
{
	int i = 5;
    int t1[i];
    int t2[i];
    int suma1;
    int suma2;
    pobierzliczby(t1);
    cout << "Teraz seria druga liczb!" << endl;
    pobierzliczby(t2);
    suma1 = suma(t1);
    suma2 = suma(t2);
    cout << "Suma 1 wynosi: " << suma1 << endl;
    cout << "Suma 2 wynosi: " << suma2 << endl;
    for (int i = 0; i<5; i++){
		cout << "Indeks tablicy 1 : " << i << " przyjmuje wartosc: " << t1[i] << endl;
	}
	for (int i = 0; i<5; i++){
		cout << "Indeks tablicy 2 : " << i << " przyjmuje wartosc: " << t2[i] << endl;
	}
	if(suma1>suma2)
		cout << "Suma 1 jest wieksza od sumy 2" << endl;
	else
		cout << "Suma 2 jest wieksza od sumy 1" << endl;
		
}

