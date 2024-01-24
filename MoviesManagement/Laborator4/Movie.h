#pragma once
#ifndef DOMAIN_H
#define DOMAIN_H
#include <ostream>

using namespace std;

class Movie
{
private:
    char* title;
    char* date;
    char* genre;
public:
    Movie();
    Movie(char* title, char* date, char* gender);
    Movie(const Movie& movie);
    ~Movie();

    Movie& operator = (const Movie& movie);
    bool operator == (const Movie& movie);

    char* getTitle();
    char* getDate();
    char* getGenre();

    void setTitle(char* title);
    void setDate(char* date);
    void setGenre(char* gender);

    friend istream& operator>>(istream& is, const Movie& movie);
    friend ostream& operator<<(ostream& os, const Movie& movie);

};

#endif 