// shoeShop.cpp
// Program to work out the best of three option of 
// payment based on sales

#include <iostream>
using namespace std;

// constants
#define AVERAGESHOEPRICE 225  // average shoe price
#define WEEKLYPAY 600    	  // weekly wage for method 1
#define HOURLYPAY 7.0         // hourly pay for method 2
#define HOURSPERWEEK 35   	  // number of hours worked for method 2
#define COMMISION1 0.1  	  // commission for method 2
#define COMMISION2 0.2  	  // commission for method 3
#define BONUS 20   	  		  // bonus for method 3

float pay;

int getInput()
{
	int totalShoesSold = 0;
	cout << "Enter number of shoes sold this week: ";
	
	if (!(cin >> totalShoesSold))
	{
		cout << "Please enter numbers only." << endl;
		cin.clear();
		cin.ignore(10000,'\n');
	}
	
	
	cout << "Shoes sold this week: " << totalShoesSold << endl;
	
	//will return 0 if invalid char is entered
	return totalShoesSold;
}

void calcMethod1()
{
	cout << "\nSet Pay" << endl;
	cout << "Option 1: €" << WEEKLYPAY << endl;
}

void calcMethod2(int soldUnits)
{
	pay = HOURLYPAY * HOURSPERWEEK;
	
	if(soldUnits >0)
	{
		pay += ((soldUnits * AVERAGESHOEPRICE) * COMMISION1);
	}
	
	cout << "\nHourly rate plus 10% commision" << endl;
	cout << "Option 2: €" << pay << endl;
}

void calcMethod3(int soldUnits)
{
	pay = 0;
	
	if(soldUnits >0)
	{
		pay = ((soldUnits * AVERAGESHOEPRICE) * COMMISION2);
		pay += (soldUnits * BONUS);
	}
	
	cout << "\n20% commision plus €20 per pair of shoes" << endl;
	cout << "Option 3: €" << pay << endl;
}

int main()
{
	int soldUnits = getInput();
	
	calcMethod1();
	calcMethod2(soldUnits);
	calcMethod3(soldUnits);
	
	return 0;
}
