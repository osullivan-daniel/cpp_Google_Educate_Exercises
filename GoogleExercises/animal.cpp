// animal.cpp:  Daniel O'Sullivan
// Description: 100 animals for $100

#include <iostream>
using namespace std;

int main () 
{
	int optionCounter = 0;
	// loop to count horses - $10
	for (int h = 0; h < 100; h++)
		// loop to count pig - $3
		for (int p = 0; p < 100; p++)
		    // loop to count - rabits 50c ($0.50)
			for (int r = 0; r < 100; r++)
			
				if ((h + p + r) == 100)
					if (((10 * h) + (3 * p) + (0.5 * r)) == 100)
					{
						optionCounter++;
						cout << "Option " << optionCounter << ": " << h << " horses " << p << " pigs " << r << " rabbits "  << endl;
					}
}
