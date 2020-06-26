/***
Spencer Evans 100777371
OOP-2200
2020-05-28

This program asks the user to input two sets of 2D coordinates. The program
calculates the distance between these coordinates and outputs the result to
the console.

***/

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int x1; // X component of coordinate 1
	int y1; // Y component of coordinate 1
	int x2; // X component of coordinate 2
	int y2; // Y component of coordinate 2
	double distance; // The calculated distance between (x1,y1) and (x2,y2)
	
	// Aks the user to input the first set of coordinates and stores the result in x1 and y1
	cout << "Input the first set of coordinates (x y): " ;
	cin >> x1 >> y1;
	
	// Aks the user to input the second set of coordinates and stores the result in x2 and y2
	cout << "Input the second set of coordinates (x y): " ;
	cin >> x2 >> y2;
	
	// Calculates the distance between (x1,y1) and (x,y2)
	distance = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));

	// Ouput the result of the distance calculation to the console with a precision of 4
	cout 	<< endl 
			<< "The distance between (" << x1 << "," << y1 
			<< ")" << " and (" 			<< x2 << "," << y2 
			<< ") is: " << fixed << setprecision(4) << distance 
			<< endl;
		
	return 0;
}
