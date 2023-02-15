#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
	Frank's Carpet Cleaning Service
	Charges $30 per room
	Sales tax rate is 6%
	Estimates are valid for 30 days

	Prompt the user for the number of rooms they would like cleaned and provide an estimate such as:

	Estimate for carpet cleaning service:
	Number of rooms: 2
	Price per room: $30
	Cost: $60
	Tax: $3.6

	========================================
	Total estimate: $63.6
	This estimate is valid for 30 days

	Pseudocode:
		Prompt the user to enter the number of rooms
		Display number of rooms
		Display price per room

		Display cost: (number of rooms * price per room)
		Display tax: number of rooms * price per room * tax rate
		Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
		Display estimate expiration time
*/


int main() {
	const int expirationTime{ 30 };
	const double salesTax{ 0.06 };
	const double pricePerRoom{ 30.0 };

	cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
	cout << "\nHow many rooms would you like cleaned? ";
	int numberOfRooms{ 0 };
	cin >> numberOfRooms;

	cout << "\nEstimate for carpet cleaning service:" << endl;
	cout << "Number of rooms: " << numberOfRooms << endl;
	cout << "Price per room: $" << 30 << endl;
	cout << "Cost: $" << 30 * numberOfRooms << endl;
	cout << "Tax: $" << numberOfRooms * pricePerRoom * salesTax << endl;
	cout << "==================================" << endl;
	cout << "Total Estimate: $" << (numberOfRooms * pricePerRoom) + (numberOfRooms * pricePerRoom * salesTax) << endl;
	cout << "This estimate is valid for " << expirationTime << " days." << endl;
	cout << endl;

	return 0;
}