// Merlin Call Skynet HK.cpp : Defines the entry point for the console application.
//Guess My number
//THe classic number guessing game

//line told to add/starting included line
#include "stdafx.h"

//includes iostream, cstdlib, and ctime tio the program code
#include <iostream>
#include <cstdlib>
#include <ctime>

//lets the code know that we are using the namespace std
using namespace std;

//main role of the program
int main()
{
	//seed random number generator
	srand(static_cast<unsigned int>(time(0)));

	//random number between 1 and 64
	//enemy location = secretNumber
	int secretNumber = rand() % 64 + 1;
	int tries = 0;
	int guess;

	//integers naming the highest and lowest guess
	int highestguess = 64;
	int lowestguess = 0;

	//integer named computer number for the guesses
	int computerNumber;

	//types out the opening lines
	cout << "Welcome to Skynet HK-Ariel\n";
	cout << "Initializing Skynet HK-Ariel traing program.\n";
	cout << "Generating random enemy location to find.\n";
	cout << "The enemy is located at " << secretNumber << " on an 8x8 grid.\n\n\n";

	//does depending on what the cope prints out
	do
	{
		//random number between the integers of range and offset
		computerNumber = ((highestguess - lowestguess) / 2) + lowestguess;

		//does something if the computerNumber > secretNumber
		if (computerNumber > secretNumber)
		{
			//prints out whether the guess is to low and the number it guessed and whether the targets where there or not
			//then resets the ranges to reflect based on the previous guess whether it was higher or lower
			cout << "The Skynet Hk has not found it's target! (too high)\n";
			cout << "Grid square searched " << computerNumber << "\n\n";
			highestguess = computerNumber;
			++tries;
		}
		//does something if the computerNumber < secretNumber
		else if (computerNumber < secretNumber)
		{
			//prints out whether the guess is to low and the number it guessed and whether the targets where there or not
			//then resets the ranges to reflect based on the previous guess whether it was higher or lower
			cout << "The Skynet Hk has not found it's target! (too low)\n";
			cout << "Grid square searched " << computerNumber << "\n\n";
			lowestguess = computerNumber;
			++tries;
		}

		//does something if not one of the two previous statements
		else
		{
			//prints out that the computers guess was right and what the number was and how many tries it wook
			cout << "The has found it's target! They are in grid space " << secretNumber << " and took " << tries + 1 << " tries\n";
		}
		//this states that while computerNumber != secretNumber
	} while (computerNumber != secretNumber);

	//this will pause the system so you can see the printed info
	system("pause");

	//thi causes the execution to leave the current subrutine
	return 0;
}