// GuessIt.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int> (time(0))); //seed rng

	int SecretNumber = rand() % 100 + 1; //random number between 1-100
	int tries = 0;
	int guess;

	cout << "\tWelcome to Guess It\n\n";

	do {
		cout << "Enter a Number: ";
		cin >> guess;
		++tries;

		if (guess > SecretNumber)
		{
			cout << "Too High!!\n\n";
		}
		else if (guess < SecretNumber)
		{
			cout << "Too Low!!\n\n";
		}
		else
		{
			cout << "\nThat's the number! Good job you got it in " << tries << " tries!";
		}
	}

    return 0;
}

