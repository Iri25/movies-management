#pragma once
#ifndef USERINTERFACE
#define USERINTERFACE
#include "Service.h"

class UserInterface
{
private:
    Service service;
public:
    UserInterface();
    UserInterface(const Service& service);
    ~UserInterface();
    
    void readingMovie();
    void updateMovie();
    void deleteMovie();
    void displayMovie();
 
    void filter_movies_by_genre();
    void delete_movies_by_date();

    void show_menu();
    int run();
};

#endif 