
#include "Person.h"


Person::Person(string n) {
	name = n;
	// assignSNumber(sSNumber); // function for getting student num todo
	sNumber = "s0000000";
}

string Person::getName() {
	return name;
}

string Person::getSNumber() {
	return sNumber;
}

void Person::setSNumber(const string& newSNumber) {
	sNumber = newSNumber;
}