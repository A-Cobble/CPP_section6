#include <iostream>

using namespace std;

int main() {
	/************************************
	Character type
	************************************/

	char middleInitial {'S'}; // Notice the single quotes around characters  char = single character therefore use single quotes
	cout << "My middle initial is " << middleInitial << endl;

	/***********************************
	Integer types
	***********************************/

	unsigned short int examScore {55}; // same as unsigned short examScore {55}; don't need int because it is already being defined by the unsigned and short words
	cout << "My exam score was " << examScore << endl;

	int countriesRepresented {65};
	cout << "There were " << countriesRepresented << " countries represented in my meeting" << endl;

	long peopleInFlorida{ 20610000 };
	cout << "There are about " << peopleInFlorida << " people in Florida." << endl;

	long long peopleOnEarth {7600000000};
	cout << "There are about " << peopleOnEarth << " people on Earth." << endl;

	long long distanceToAlphaCentauri{ 9461000000000 };
	cout << "The distance to Alpha Centauri is " << distanceToAlphaCentauri << " kilometers." << endl;

	float carPayment{ 401.23 };
	cout << "My car payment is " << carPayment << endl;

	double pi {3.14159};
	cout << "PI is " << pi << endl;

	long double largeAmount{ 2.7e120 };
	cout << largeAmount << " is a very big number" << endl;

	/**********************************
	Boolean Type
	**********************************/

	bool gameOver{ false };
	cout << "The value of gameOver is " << gameOver << endl;

	/*********************************
	Overflow Example
	*********************************/

	short value1 {30000};
	short value2 {1000};
	short product{ value1 * value2 }; //the product will no longer fit inside the short and thus gives an overflow (which is some negative number)

	cout << "The product of " << value1 << " and " << value2 << " is " << product << endl;

	return 0;

}