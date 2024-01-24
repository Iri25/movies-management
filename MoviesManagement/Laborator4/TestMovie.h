#pragma once
#ifndef TESTDOMAIN
#define TESTDOMAIN
#include <ostream>

using namespace std;

class TestMovie
{
private:
	void tests_constructors();

	void test_operator();

	void test_getTitle();
	void test_getDate();
	void test_getGenre();

	void test_setTitle();
	void test_setDate();
	void test_setGenre();
public:
	TestMovie();
	~TestMovie();

	void run_TestMovie();
};

#endif 