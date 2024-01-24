#include "Service.h"
#include<iostream>
using namespace std;

Service::Service()
{

}

Service::Service(const Repository& repository)
{
    this->repository = repository;
}

Service::~Service()
{

}

void Service::addMovie(Movie& movie)
{
   repository.addMovie(movie);
}

Movie* Service::updateMovie(Movie& movie, char* title, char* date, char* genre)
{
    repository.updateMovie(movie, title, date, genre);
    return &movie;
}

void Service::deleteMovie(Movie& movie)
{
    repository.deleteMovie(movie);
}

Movie* Service::getAll()
{
    return repository.getAll();
}

int Service::getSize()
{
    return repository.getSize();
}

int Service::findMovie(Movie& movie)
{
    return repository.findMovie(movie);
}

Movie Service::getMovie(int i)
{
    return repository.getMovie(i);
}

void Service::filter_movies_by_genre(char* gender, Movie filter_movies[100], int& m)
{
    int i;
    for (i = 0; i < repository.getSize(); i++)
    {
        Movie crt_Movie = repository.getMovie(i);
        if (strcmp(crt_Movie.getGenre(), gender) == 0)
        {
            filter_movies[m++] = crt_Movie;
        }
    }
    if (m == 0)
        cout << "Nu exista!" << endl;
    
}

void Service::delete_movies_by_date(char* date)
{
    int i = 0; 
    while (i < repository.getSize())
    {
        Movie crt_Movie = repository.getMovie(i);
        if (strcmp(crt_Movie.getDate(), date) < 0)
        {
            repository.deleteMovie(crt_Movie);
        }
        i++;
    }
}