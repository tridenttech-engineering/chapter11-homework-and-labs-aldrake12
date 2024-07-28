//Introductory21.cpp - Displays the average stock price
//Revised by Andrew Drake on 07.28.2024

#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
double getAverage(double prices[], int numElements);

int main()
{
	double prices[10] = {96.5, 100.5, 100.5, 100.5, 99, 99, 99, 100, 98.5, 98.9};
	double average = 0.0;

	average = getAverage(prices, 10);
	cout << fixed << setprecision(2);
	cout << "Average stock price: $" << average << endl;
	return 0;
}	//end of main function

//*****function definitions*****
double getAverage(double prices[], int numElements)
{
	double total = 0.0;

	for (int x = 0; x < numElements; x += 1)
		total += prices[x];
	//end for
	return total / numElements;
}	//end of getAverage function


//The program should calculate the average stock price stored in the prices array. It then should display the average price on the screen. Complete the program using the for statement.