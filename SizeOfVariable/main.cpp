#include <iostream>
#include <climits>	//make sure to include climits for integer types
					//Similar information for floating point numbers is contained in cfloat

using std::cout;
using std::endl;
using std::cin;

int main() {
	cout << "sizeof information" << endl;
	cout << "================================" << endl;

	cout << "char: " << sizeof(char) << " bytes." << endl; // 1 byte
	cout << "int: " << sizeof(int) << " bytes." << endl; // 4 bytes
	cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl; //4 bytes
	cout << "short: " << sizeof(short) << " bytes." << endl; //2 bytes
	cout << "long: " << sizeof(long) << " bytes." << endl; //4 bytes
	cout << "long long: " << sizeof(long long) << " bytes." << endl; //8 bytes

	cout << "================================" << endl;

	cout << "float: " << sizeof(float) << " bytes." << endl; //4 bytes
	cout << "double: " << sizeof(double) << " bytes." << endl; //8 bytes
	cout << "long double: " << sizeof(long double) << " bytes." << endl; //8 bytes

	//use values defined in <climits>
	cout << "================================" << endl;

	cout << "Minimum values: " << endl;
	cout << "char: " << CHAR_MIN << endl; // -128
	cout << "int: " << INT_MIN << endl; //-2147483648
	cout << "short: " << SHRT_MIN << endl; //-32768
	cout << "long: " << LONG_MIN << endl; // -2147483648
	cout << "long long: " << LLONG_MIN << endl; // -9223372036854775808

	cout << "================================" << endl;

	cout << "Maximum values: " << endl;
	cout << "char: " << CHAR_MAX << endl; //127
	cout << "int: " << INT_MAX << endl; //2147483647
	cout << "short: " << SHRT_MAX << endl; //32767
	cout << "long: " << LONG_MAX << endl; //2147483647
	cout << "long long: " << LLONG_MAX << endl; //9223372036854775807

	cout << "================================" << endl;

	cout << "sizeof using variable names" << endl;
	int age {21};
	cout << "age is: " << sizeof(age) << " bytes." << endl; //4 bytes
	//or
	cout << "age is: " << sizeof age << " bytes." << endl; //4 bytes

	double wage{ 22.24 };
	cout << "wage is: " << sizeof(wage) << endl; //8 bytes
	//or
	cout << "wage is: " << sizeof wage << " bytes." << endl; //8 bytes


	return 0;
}