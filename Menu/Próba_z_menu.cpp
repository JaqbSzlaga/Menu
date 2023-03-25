#include "Próba_z_menu.h"
#include <iostream>


void f_menu(sKsiazka dane[5])
{

	int wybor1;
	int liczba = 0;


	while (1)
	{
		std::cout << "\n 1. Wpisz dane katalogowe ksiazki ";
		std::cout << "\n 2. Zobacz zawartosc ";
		std::cout << "\n 3. Ksiazki niewyporzyczone majace mniej niz 100 stron";
		std::cout << "\n 4. Wyjscie";

		std::cout << "\n\n Wybierz opcje: ";
		std::cin >> wybor1;

		system("cls");

		switch (wybor1)
		{
		case 1:
			int ilosc;
			std::cout << "Ile ksiazek wpisujesz?  ";
			std::cin >> ilosc;
			for (int i = 0; i < ilosc; i++)
			{
				std::cin.ignore();
				std::cout << "Element: " << liczba + 1;

				std::cout << "\n Tytul ksiazki: ";
				std::cin.getline(dane[liczba].tytul, 50);
				std::cout << "\n Autor: ";
				std::cin.getline(dane[liczba].autor, 30);
				std::cout << "\n Liczba stron: ";
				std::cin >> dane[liczba].licz_stron;
				std::cout << "\n Wypozyczona?\n Wpisz:\n 1 - dla tak \n 0 - dla nie ";
				std::cin >> dane[liczba].wypozyczona;


				liczba++;
			}


			break;
		case 2:
			for (int i = 0; i < liczba; i++)
			{
				std::cout << i + 1 << ". " << dane[i].tytul << " "
					<< dane[i].autor << " "
					<< dane[i].licz_stron << " "
					<< dane[i].wypozyczona << "\n";
			}

			break;

		case 3:
			for (int i = 0; i < liczba; i++)
			{
				if ((dane[i].licz_stron < 100) && (dane[i].wypozyczona == 0))
				{
					std::cout << "\nKsiazki, ktore sa niewypozyczone i maja mniej niz 100 stron: " << std::endl;
					std::cout << dane[i].tytul << " , " << dane[i].autor << std::endl;
				}

			}

			break;

		case 4: exit(0);

		default:

			std::cout << "\n Nie ma takiej opcji do wyboru ";

		}

	}


}
