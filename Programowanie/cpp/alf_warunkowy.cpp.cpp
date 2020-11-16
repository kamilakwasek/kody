/*
 * liczby.cpp

 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int lp = 0; 
	cout << "Podaj liczbe punktów:" ;
	cin >> lp;
	if (lp < 20);
		cout << "Grupa podstawowa" ; 
	else if (lp >= 20 && lp <= 40) ;
		cout << "Grupa średnio zaawansowana" ;
	else if (lp > 40 && lp <= 60)
		cout << "Grupa zaawansowana" ; 
	return 0;
}

