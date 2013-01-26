// factorial.cpp.  Maggie Johnson
// Description: Computes How many ways can you arrange 
// 6 different books, left to right, on a shelf

#include <iostream>
using namespace std;

int main () 
{
	// 6 Books
	int books = 6;
	int factorial = 1;
	
	for(int i = books; i>=1; i--)
	{
		factorial *= i;
	}
	
	cout << factorial << endl;
}
