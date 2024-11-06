/*
The Class structure for person, student and faculty. Staff too */

// #include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person {
private:
	string name;
	string sNumber;
	string phoneNumber;
	//address once we have an address class.

public: 
	//constructors
	Person(string n);

	//accessors 
	string getName(); // returns name
	string getSNumber(); // returns student number

	//mutators
	void setSNumber(string newSNumber);
};

class Student : public Person { // student IS A person / or student inherits person
private:
	vector<string> courseIDS;
	double gpa;
public: 
	Student(string n); // constructor
	double getGPA();
	double setGPA(double newGPA);
	void addCourse(string c);
	void dropCourse(string c);
};


int main() {

	return 0;
}