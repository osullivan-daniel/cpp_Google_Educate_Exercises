// guess.cpp: Daniel O'Sullivan
// Description: Guess the number Game (Higher/Lower).

#include <cstdlib> 
#include <iostream>
using namespace std;

int main()
{
	int randomInteger;
	int userGuess;
	bool validInput = false;
	
	//Seeding your rand
	srand((unsigned)time(0));
	//create random between 1 and 10
	randomInteger = (rand()%100)+1;
	
	do
	{
		do
		{
			//Take user input
			cout << "Enter a number between 1 and 100: ";
		
			//Check if its not an int 
			if (!(cin >> userGuess))
			{
				cout << "Please enter numbers only." << endl;
				cin.clear();
				cin.ignore(10000,'\n');
			}
			
			//Check its between 1 and 100
			if(userGuess<100 & userGuess>1)
			{
				//true
				validInput = true;
			}
		}
		//Keep looping till you recive valid input
		while(validInput == false);	
	
		//if the guess is lower
		if(userGuess<randomInteger)
			cout << "Wrong. Higher!" << endl;
		//if the guess is higher
		else if(userGuess>randomInteger)
			cout << "Wrong. Lower!" << endl;
	}
	//Keep looping till the guess matches the answer
	while(userGuess != randomInteger);
	
	cout << "You Win!" << endl;
}
