#include <iostream>
#include <string>
using namespace std;

int main() {
	string fName, lName, address, city, character;
	int zipCode;

	cout << "Please enter the first name of the fictional character: ";
	getline(cin, fName);

	cout << "Please enter the last name of the fictional character: ";
	getline(cin, lName);

	cout << "Please enter the street address of the fictional character: ";
	getline(cin, address);

	cout << "Please enter the city where the fictional character is from: ";
	getline(cin, city);

	cout << "Please enter the zip code where the fictional character is from: ";
	cin >> zipCode;

	character = fName + " " + lName + ", " + address + ", " + city + " " + to_string(zipCode);

	cout << "\n" + character << endl;

	cout << "Exiting..." << endl;
	system("pause");

	return 0;
}