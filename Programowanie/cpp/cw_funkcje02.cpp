/*
 * cw_funkcje02.cpp
 */


#include <iostream>
using namespace std;

void srednia(float suma, float iloscliczb){
    float srednia = suma / iloscliczb;
    cout <<"srednia wynosi: "<< srednia <<endl;
}

void mediana(float *tab, int iloscliczb){
    float mediana;
    if(iloscliczb % 2 ==0){
        mediana = (tab[iloscliczb/2 - 1]+tab[iloscliczb/2])/2;
    } else {
        mediana = tab[iloscliczb/2];
    }
    cout <<"Mediana wynosi: " << mediana << endl;
}


int main(int argc, char **argv)
{
	 int temp =0;
    int iloscliczb =0;
    int *tab = new int [iloscliczb];
    cout <<"podaj ilosc liczb: ";
    cin >>iloscliczb;

    if(iloscliczb >20){
        cout <<"mozna wpisac maksymalnie 20 ocen" <<endl;
        return 0;
}
}
        suma += tablica[i];
    }
	int n;
    int m;
    for(n=0; n <iloscliczb; n++)
    	{
    		for(m=n+1; m < iloscliczb; m++)
    		{
    			if(tablica[n]>tablica[m])
    			{
    				temp  =tablica[n];
    				tablica[n]=tablica[m];
    				tablica[m]=temp;
    			}
    		}
    	}
    srednia(suma, iloscliczb);
    mediana(tablica, iloscliczb);

	return 0;
}



