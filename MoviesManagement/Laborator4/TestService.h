#pragma once
#ifndef TESTSERVICE
#define TESTSERVICE
#include "Service.h"

class TestService
{
private:
	Service service;

	void tests_constructors();

	void test_addMovie();
	void test_updateMovie();
	void test_deleteMovie();

	void test_getAll();

	void test_filter_movies_by_genre();
	void test_delete_movies_by_date();
public:
	TestService();
	~TestService();

	void run_TestService();
};

#endif 