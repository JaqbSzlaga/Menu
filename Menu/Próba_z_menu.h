#ifndef LIBSTRUCT_H
#define LIBSTRUCT_H
#include <iostream>
#include <atomic>
#include<conio.h>

struct sKsiazka
{
	char tytul[50];
	char autor[30];
	int licz_stron;
	bool wypozyczona;
};


void f_menu(sKsiazka dane[5]);


#endif
