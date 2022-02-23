// CSCI 238
// Project #2 - Geolocator
//
// this demo shows how to read data from a text file into an array of structs

#include <iostream>
#include <fstream>
using namespace std;

// declare a Payroll structure - note this does NOT create one, only defines
struct Payroll {
  string firstName;
	string lastName;
	double hourlyRate;
};

// demonstrate how to return a structure member from a file
// assumes file is already open
struct Payroll readRecord(ifstream &inFile)
{
	  struct Payroll pay;
		string line;

		getline(inFile, pay.firstName);
		getline(inFile, pay.lastName);
		getline(inFile, line);
		pay.hourlyRate = stod(line);
		return pay;
}

void printRecord(struct Payroll p) {
	cout << "First Name: " << p.firstName << endl;
	cout << "Last Name: " << p.lastName << endl;
	cout << "Hourly Rate: " << p.hourlyRate << endl;
	cout << endl;
}

int main() {
	struct Payroll p;

	ifstream in;
	in.open("payroll.txt");
	string line;
	while (!in.eof()) {
		p = readRecord(in);
    printRecord(p);
		in.peek();
	}
	in.close();
}
