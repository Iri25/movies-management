#include <iostream>
#include "Movie.h"
#include "Repository.h"
#include "Service.h"
#include "UserInterface.h"
#include "TestMovie.h"
#include "TestRepository.h"
#include "TestService.h"

using namespace std;

int main()
{
	TestMovie testMovie;
	testMovie.run_TestMovie();

	TestRepository testRepository;
	testRepository.run_TestRepository();

	TestService testService;
	testService.run_TestService();
	
	UserInterface userInterface;
	userInterface.run();
	
	return 0;
}