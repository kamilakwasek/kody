#!/usr/bin/env python
# -*- coding: utf-8 -*-
#  listy_cw2.py
#  


def pobierzliczby(lista):
	for i in range(5):
		liczba1 = int(input("Podaj liczbe: "))
		lista.append(liczba1)
		
def pobierzliczby2(lista):
	for i in range(5):
		liczba2 = int(input("Podaj liczbe: "))
		lista.append(liczba2)
				

def suma(lista1, lista2):
	suma1 = 0
	suma2 = 0
	for liczba1 in lista1:
		suma1+= liczba1
	for liczba2 in lista2:
		suma2+= liczba2

	
		
	return suma1,suma2
		
	

def main(args):
	lista1 = [] 
	lista2 = []
	pobierzliczby(lista1)
	print("Teraz druga seria liczb!")
	pobierzliczby2(lista2)
	print(lista1)
	print(lista2)
	suma1, suma2 =suma(lista1, lista2)
	print("Suma w tablicy pierwszej: ", suma1)
	print("Suma w tablicy drugiej: ", suma2)
	if suma1>suma2:
		print("Lista pierwsza jest większa od listy drugiej")
	else:
		print("Lista druga jest większa od listy pierwszej")
	return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
