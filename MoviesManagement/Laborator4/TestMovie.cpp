#include "TestMovie.h"
#include "Movie.h"
#include <assert.h>

TestMovie::TestMovie()
{

}

TestMovie::~TestMovie()
{

}

void TestMovie::tests_constructors()
{
	Movie movies[5];

	char* title1 = new char[20];
	char* title2 = new char[20];
	char* title3 = new char[20];
	char* title4 = new char[20];
	char* title5 = new char[20];

	char* date1 = new char[20];
	char* date2 = new char[20];
	char* date3 = new char[20];
	char* date4 = new char[20];
	char* date5 = new char[20];

	char* genre1 = new char[20];
	char* genre2 = new char[20];
	char* genre3 = new char[20];
	char* genre4 = new char[20];
	char* genre5 = new char[20];

	//implicit constructor
	strcpy_s(title1, sizeof "Bright", "Bright");
	strcpy_s(date1, sizeof "11.11.2019", "11.11.2019");
	strcpy_s(genre1, sizeof "thriller", "thriller");
	Movie movie1;

	//general constructor
	strcpy_s(title2, sizeof "Mute", "Mute");
	strcpy_s(date2, sizeof "11.11.2011", "11.11.2011");
	strcpy_s(genre1, sizeof "drame", "drame");
	Movie movie2(title2, date2, genre2);

	strcpy_s(title3, sizeof "Mank", "Mank");
	strcpy_s(date3, sizeof "09.11.2016", "09.11.2016");
	strcpy_s(genre3, sizeof "biographical", "biographical");
	Movie movie3(title3, date3, genre3);

	strcpy_s(title4, sizeof "Tig", "Tig");
	strcpy_s(date4, sizeof "02.03.2020", "02.03.2020");
	strcpy_s(genre4, sizeof "documentary", "documentary");
	Movie movie4(title4, date4, genre4);

	strcpy_s(title5, sizeof "Rebecca", "Rebecca");
	strcpy_s(date5, sizeof "01.02.2020", "01.02.2020");
	strcpy_s(genre5, sizeof "thriller", "thriller");
	Movie movie5(title5, date5, genre5);

	movies[0] = movie1;
	movies[1] = movie2;
	movies[2] = movie3;
	movies[3] = movie4;
	movies[4] = movie5;
}

void TestMovie::test_operator()
{
	Movie movies[5], movie1, movie4;

	movies[0] = movie1;
	movies[5] = movie4;

	movie4 = movie1;
	assert(movie4 == movie1);
}

void TestMovie::test_getTitle()
{
	Movie movies[5], movie1, movie2, movie3, movie4, movie5;

	movies[0] = movie1;
	movies[1] = movie2;
	movies[2] = movie3;
	movies[3] = movie4;
	movies[4] = movie5;

	assert(movie1.getTitle() == "Bright");
	assert(movie2.getTitle() == "Mute");
	assert(movie3.getTitle() == "Mank");
	assert(movie4.getTitle() == "Tig");
	assert(movie5.getTitle() == "Rebecca");
}

void TestMovie::test_getDate()
{
	Movie movies[5], movie1, movie2, movie3, movie4, movie5;

	movies[0] = movie1;
	movies[1] = movie2;
	movies[2] = movie3;
	movies[3] = movie4;
	movies[4] = movie5;

	assert(movie1.getDate() == "11.11.2019");
	assert(movie2.getDate() == "11.11.2011");
	assert(movie3.getDate() == "09.11.2016");
	assert(movie4.getDate() == "02.03.2020");
	assert(movie5.getDate() == "01.02.2020");
}

void TestMovie::test_getGenre()
{
	Movie movies[5], movie1, movie2, movie3, movie4, movie5;

	movies[0] = movie1;
	movies[1] = movie2;
	movies[2] = movie3;
	movies[3] = movie4;
	movies[4] = movie5;

	assert(movie1.getGenre() == "thriller");
	assert(movie2.getGenre() == "drame");
	assert(movie3.getGenre() == "biographical");
	assert(movie4.getGenre() == "documentary");
	assert(movie5.getGenre() == "thriller");
}
void TestMovie::test_setTitle()
{
	Movie movies[5], movie2, movie3;

	movies[1] = movie2;
	movies[2] = movie3;

	movie2.setTitle(movie3.getTitle());
	assert(movie2.getTitle() == movie3.getTitle());
}

void TestMovie::test_setDate()
{
	Movie movies[5], movie2, movie3;

	movies[1] = movie2;
	movies[2] = movie3;

	movie2.setDate(movie3.getDate());
	assert(movie2.getDate() == movie3.getDate());
}

void TestMovie::test_setGenre()
{
	Movie movies[5], movie2, movie3;

	movies[1] = movie2;
	movies[2] = movie3;

	movie2.setGenre(movie3.getGenre());
	assert(movie2.getGenre() == movie3.getGenre());
}

void TestMovie::run_TestMovie()
{
	void tests_constructors();

	void test_operator();

	void test_getTitle();
	void test_getDate();
	void test_getGenre();

	void test_setTitle();
	void test_setDate();
	void test_setGenre();
}