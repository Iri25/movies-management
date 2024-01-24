#pragma once
#ifndef SERVICE_H
#define SERVICE_H
#include "Repository.h"

class Service
{
private:
    Repository repository;
public:
    Service();
    Service(const Repository& repository);
    ~Service();

    void addMovie(Movie& movie);
    Movie* updateMovie(Movie& movie, char* title, char* date, char* genre);
    void deleteMovie(Movie& movie);

    Movie* getAll();
    int getSize();

    int findMovie(Movie& movie);
    Movie getMovie(int i);

    void filter_movies_by_genre(char* gender, Movie filter_movies[100], int& m); 
    void delete_movies_by_date(char* date); 
};

#endif 