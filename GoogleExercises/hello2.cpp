// hello2.cpp: Daniel O'Sullivan
// Description: a program that prints the immortal saying "hello world"

#include <iostream>
// we need the following include for setw() in some c++ implementations
// (required for g++ in Ubuntu)
#include <iomanip>
using namespace std;

int main()
{
	// the first for-loop will handle the rows
	for (int i = 0; i < 6; i++)
	{
		// the second for loop will handle the columns
		for (int j = 0;  j < 4 ; j++)
			// setw(int) sets the column width
			//left left alighs in the space
			cout << setw(17) << left << "Hello World!";
		// this  next line is a part of the first for loop
		// and causes the new line
		cout << endl;
	}
	return 0;
}
