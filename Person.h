#pragma once
// class interface
#include <string>
using std::string;

class Person{
private:

	string name;
	string sNumber;
	string phoneNumber;
	//address once we have an address class.
protected:
	string personType; // can use in this class and all baby classes can use this

public:
	//constructors
	Person(string n);

	//accessors 
	string getName(); // returns name
	string getSNumber(); // returns student number

	//mutators
	void setSNumber(const string& newSNumber);
};
