#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
		Frank's Carpet Cleaning Service
		Charges:
			$25 per small room
			$35 per large room
		Sales tax rate is 6%
		Estimates are valid for 30 days

		Prompt the user for the number of small and large rooms they would like cleaned and provide an estimate such as:

		Estimate for carpet cleaning service
		Number of small rooms:3
		Number of large rooms:1
		Price per small room: $25
		Price per large room: $35
		Cost: $110
		Tax: $6.6

		====================================
		Total estimate: $116.6
		This estimate is valid for 30 days
	*/

int main() {

	const double salesTax{ 0.06 };
	const double pricePerSmallRoom{ 25.00 };
	const double pricePerLargeRoom{ 35.00 };
	const int estimateGuarantee{ 30 }; //days

	cout << "Hello and welcome to Frank's carpet cleaning service!" << endl;
	cout << "How many small rooms would you like cleaned? ";
	
	int numberOfSmallRooms{ 0 };
	cin >> numberOfSmallRooms;

	cout << "How many large rooms would you like cleaned? ";

	int numberOfLargeRooms{ 0 };
	cin >> numberOfLargeRooms;

	cout << "\nEstimate for carpet cleaning service" << endl;
	cout << "Number of small rooms: " << numberOfSmallRooms << endl;
	cout << "Number of large rooms: " << numberOfLargeRooms << endl;
	cout << "Price per small room: $" << pricePerSmallRoom << endl;
	cout << "Price per large room: $" << pricePerLargeRoom << endl;

	double totalRoomCost{ (numberOfLargeRooms * pricePerLargeRoom) + (numberOfSmallRooms * pricePerSmallRoom) };
	double totalSalesTax{ (salesTax * totalRoomCost) };
	cout << "Cost: $" << totalRoomCost << endl;
	cout << "Tax: $" << totalSalesTax << endl;
	cout << "\n=====================================" << endl;
	cout << "Total estimate: $" << (totalRoomCost + totalSalesTax) << endl;
	cout << "This estimate is valid for " << estimateGuarantee << endl;

	cout << endl;



	return 0;
}