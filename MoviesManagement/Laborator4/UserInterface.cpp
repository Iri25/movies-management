#include <iostream>
#include "UserInterface.h"

using namespace std;

UserInterface::UserInterface()
{

}

UserInterface::UserInterface(const Service& service)
{
	this->service = service;
}

UserInterface::~UserInterface()
{

}

void UserInterface::readingMovie()
{
	char title[20];
	char date[12];
	char genre[20];

	cout << "Dati titlul: ";
	cin >> title;
	cout << "Dati data lansarii: ";
	cin >> date;
	cout << "Dati genul: ";
	cin >> genre;
	Movie movie(title, date, genre);
	service.addMovie(movie);
	cout << endl << "Filmul a fost adaugat!" << endl;
}

 void UserInterface::updateMovie()
{
	int index;
	cout << "Dati pozitia filmului de actualizat: ";
	cin >> index;
	char title[20], date[12], genre[20];
	cout << "Dati titlu nou: ";
	cin >> title;
	cout << "Dati data noua: ";
	cin >> date;
	cout << "Dati genul nou: ";
	cin >> genre;
	Movie movie = service.getAll()[index];
	service.updateMovie(movie, title, date, genre);
	cout << "Filmul a fost actualizat!"<< endl;
}

void UserInterface::deleteMovie()
{
	int index;
	cout << "Dati pozitia filmului de sters: ";
	cin >> index;
	Movie movie = service.getAll()[index];
	service.deleteMovie(movie);
	cout << "Filmul a fost sters!" << endl;
}

void UserInterface::displayMovie()
{
	int i;
	for (i = 0; i < service.getSize(); i++)
	{
		cout << service.getAll()[i];
	}
}

void UserInterface::filter_movies_by_genre()
{
	int m = 0, i;
	Movie filter_movies[100];
	char genre[20];
	cout << "Dati genul: ";
	cin >> genre;
	service.filter_movies_by_genre(genre, filter_movies, m);
	for (i = 0; i < m; i++)
	{
		cout << filter_movies[i];
		cout << endl;
	}
}

void UserInterface::delete_movies_by_date()
{
	int m = 0, i;
	Movie filter_movies[100];
	char date[12];
	cout << "Dati data calendaristica: ";
	cin >> date;
	service.delete_movies_by_date(date);
}

void UserInterface::show_menu()
{
	cout << "---MENIU---" << "\n";
	cout << endl;
	cout << "0. Inchidere" << "\n";
	cout << "1. Citire filme" << "\n";
	cout << "2. Afisare filme" << "\n";
	cout << "3. Actualizare filme" << "\n";
	cout << "4. Stergere filme" << "\n";
	cout << "5. Afisarea tuturor filmelor dintr-un anumit gen" << "\n";
	cout << "6. Eliminarea filmelor lansate inaintea unei anumite date calendaristice" << "\n";
	cout << "\n";
}

int UserInterface::run()
{
	int op = -1;
	do
	{
		show_menu();
		int op;
		cout << "Dati optiunea: ";
		cin >> op;
		switch (op)
		{
		case 0:
		{
			exit(1);
			break;
		}
		case 1:
		{
			readingMovie();
			cout << "\n";
			break;
		}
		case 2:
		{
			displayMovie();
			cout << "\n";
			break;
		}
		case 3:
		{
			updateMovie();
			cout << "\n";
			break;
		}
		case 4:
		{
			deleteMovie();
			cout << "\n";
			break;
		}
		case 5:
		{
			filter_movies_by_genre();
			cout << "\n";
			break;
		}
		case 6:
		{
			delete_movies_by_date();
			cout << "\n";
			break;

		}
		default:
		{
			cout << "Comanda imposibila!";
			cout << "\n";
		}
		}
	} 
	while (op != 0);
}
