#pragma once
#ifndef REPOSITORY_H
#define REPOSITORY_H
#include "Movie.h"

class Repository
{
private:
    Movie movies[100]; 
    int n;
public:
    Repository();
    ~Repository();

    void addMovie(Movie& movie); 
    void updateMovie(Movie& movie, char*, char*, char*);
    void deleteMovie(Movie& movie);

    Movie* getAll();
    int getSize();


    int findMovie(Movie& movie);
    Movie getMovie(int i);
};

#endif 