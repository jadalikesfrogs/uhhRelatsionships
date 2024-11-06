/*
The Class structure for person, student and faculty. Staff too */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person {
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

class Student : public Person { // student IS A person / or student inherits person
private:
	vector<string> courseIDS;
	double gpa;
public: 
	
	Student(const string& n); // constructor
	
	//accessors
	double getGPA();

	//mutators
	double setGPA(double newGPA);
	void addCourse(const string& c);
	void dropCourse(const string& c);
};


Student::Student(const string& n) : Person(n) { // person is the MOMMY
	setGPA(0.0);
	personType = "Student";
}

double Student::setGPA(double g) {
	double oldGPA = gpa;
	gpa = g;
	return oldGPA; //dont ask bro
}

double Student::getGPA() {
	return gpa;
}

void Student::addCourse(const string& c) {
// should prob check for dupes
	courseIDS.push_back(c);
}

void Student::dropCourse(const string& c) {
	vector<string>::iterator i;
	i = find(courseIDS.begin(), courseIDS.end(), c); // start at the beginning and go to the end searching for "c"
	
	if (i != courseIDS.end()) { 
		courseIDS.erase(i);
	}
}

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

///////////////////////////////////////////////////////////////////////// MAIN GOES HERE ??????????? I THINK LMAO 

int main() {
	Student s1("Jimmy");
	cout << s1.getName() << " " << s1.getSNumber() << endl;
	s1.setGPA(3.46); // jimmy is sooooo smart v smart wow
	cout << s1.getGPA() << endl;

}