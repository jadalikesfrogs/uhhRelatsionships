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
protected:
	string personType; // can use in this class and all baby classes can use this

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

}

string Person::getName() {
	
	
}

string Person::getSNumber() {
	

}

void Person::setSNumber(string newSNumber) {


}
