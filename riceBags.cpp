// Ben Larsin
// Date:9/12/2022
// Program Title:Rice Bags
// Program Description: gets amount of lbs of rice a bag can hold from user then calculates how many bags are needed to store a metric ton

#include <iostream>
#include <string>


using namespace std;

// Named constants
const int METRIC_TON = 2205;


int main()
{

	// Variable declaration
	int rice; 
	int bags;

	//Program title and description for the user
	cout << "Title: Rice Bags" << '\n' << "Description: gets amount of lbs of rice a bag can hold from user then calculates how many bags are needed to store a metric ton." << endl;


	// User input
	cout << "How much rice in pounds can one bag hold?" << endl;

	cin >> rice;

	// Calculations
	bags = METRIC_TON / rice;
	//comment


	// Output to the screen
	system("cls");

	cout << "To store a metric ton you need " << bags << " bags of rice." << endl;


	return 0;
}