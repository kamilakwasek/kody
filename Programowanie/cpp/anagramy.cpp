/*
 * anagramy.cpp
 * 
 */

void anagramy(char w[], int r) 
{
	int i1, i2, i3, i4;
	for(i1 = 0; i1 < r; i1++) 
	{
		for (i2 = 0; i2 < r; i2++) 
		{
			for(i3 = 0; < r; i3++)
			{
				for(i4 = 0; < r; i4++)
				{
					if (i1 == i2 || i2 == i3 || i3 = i4 || i1 == i3) continue;
					cout << i1 << i2 << i3 << endl;
				}
			}
		} 
	}
}


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int r = 5;
	char wyraz[r];
	cout << "Podaj wyraz";
	cin.getline(wyraz, r);
	cout << wyraz << endl;
	anagramy(wyraz, r-1);
	
	return 0;
}

