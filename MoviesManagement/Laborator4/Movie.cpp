#include "Movie.h"
#include <cstddef>
#include <string.h>
#include <istream>
#include <ostream>
#include <iostream>

using namespace std;

Movie::Movie()
{
	//cout << "Implicit constructor!" << endl;

	this->title = NULL;
	this->date = NULL;
	this->genre = NULL;
}

Movie::Movie(char* title, char* date, char* genre)
{
	//cout << "General constructor!" << endl;

	this->title = new char[strlen(title) + 1];
	strcpy_s(this->title, 1 + strlen(title), title);
	this->date = new char[strlen(date) + 1];
	strcpy_s(this->date, 1 + strlen(date), date);
	this->genre = new char[strlen(genre) + 1];
	strcpy_s(this->genre, 1 + strlen(genre), genre);
}

Movie::Movie(const Movie& movie)
{
	//cout << "Copy constructor!" << endl;

	setTitle(movie.title);
	setDate(movie.date);
	setGenre(movie.genre);
}

Movie::~Movie()
{
	//cout << "Destructor!" << endl;

	if (this->title)
		delete[] this->title;
	this->title = NULL;
	if (this->date)
		delete[] this->date;
	this->date = NULL;
	if (this->genre)
		delete[] this->genre;
	this->genre = NULL;
}

Movie& Movie::operator=(const Movie& movie)
{
	if (this == &movie)
		return *this;
	if (title)
		delete[] title;
	title = new char[strlen(movie.title) + 1];
	strcpy_s(title, strlen(movie.title) + 1, movie.title);
	if (date)
		delete[] date;
	date = new char[strlen(movie.date) + 1];
	strcpy_s(date, strlen(movie.date) + 1, movie.date);
	if (genre)
		delete[] genre;
	genre = new char[strlen(movie.genre) + 1];
	strcpy_s(genre, strlen(movie.genre) + 1, movie.genre);

}

bool Movie::operator==(const Movie& movie)
{
	return (strcmp(title, movie.title) == 0) && (strcmp(date, movie.date) == 0) && (strcmp(genre, movie.genre) == 0);
}

char* Movie::getTitle()
{
	return this->title;
}

char* Movie::getDate()
{
	return this->date;
}

char* Movie::getGenre()
{
	return this->genre;
}

void Movie::setTitle(char* title)
{
	if (this->title) 
	{
		delete[] this->title;
	}
	this->title = new char[strlen(title) + 1];
	strcpy_s(this->title, strlen(title) + 1, title);
}

void Movie::setDate(char* date)
{
	if (this->date)
	{
		delete[] this->date;
	}
	this->date = new char[strlen(date) + 1];
	strcpy_s(this->date, strlen(date) + 1, date);
}

void Movie::setGenre(char* genre)
{
	if (this->genre) 
	{
		delete[] this->genre;
	}
	this->genre = new char[strlen(genre) + 1];
	strcpy_s(this->genre, strlen(genre) + 1, genre);
}

istream& operator>>(istream& is, const Movie& movie)
{
	cout << "Dati titlul: ";
	is >> movie.title;
	cout << "Dati data lansarii: ";
	is >> movie.date;
	cout << "Dati genul: ";
	is >> movie.genre;
	return is;
}
ostream& operator<<(ostream& os, const Movie& movie)
{
	os <<"Film: "<< movie.title << ", "<< movie.date << ", " << movie.genre << endl;
	return os;
}