#include <iostream>
#include <random> //Random number generation
using namespace std;

int main() {
	//Initalize random number generator
	random_device rd; //Obtain a random number from hardware
	mt19937 eng(rd()); //Seed the generator
	uniform_int_distribution<> distr(1, 100); //Define the range

	int randomNumber = distr(eng); //Generate the random number
	int userGuess = 0; //User guess
	int attempts = 0; //Number of attempts

	cout << "Welcome to the Guessing Game!" << endl;
	cout << "I have selected a random number between 1 and 100. Can you guess it?" << endl;

}
