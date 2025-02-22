#include "date.h"
#include "address.h"

#include <iostream>
#include <sstream>


Student::Student(){
	studentString = "";
	firstName = "";
	lastName = "";
	dob = new Date();
	expectedGrad = new Date();
	address = new Address();
	creditHours = 0;
}

Student::Student(std::string studentString){
	Student::init(studentString);
}

Student::~Student(){
	delete dob;
	delete expectedGrad;
	delete address;
}

void Student::printStudent(){
	std::cout << firstName << " " << lastName << std::endl;
	address->printAddress();

	std::cout << "DOB: ";
	dob->printDate();
	std::cout << "Grad: ";
	expectedGrad->printDate();

	std::cout << "Credits: " << creditHours << std::endl;
	std::cout << "_____________________________________";
	std::cout << std::endl;
}

std::string Student::getLastFirst(){
	std::stringstream ss;
	ss.clear();
	ss << lastName << ", " << firstName;
	return ss.str();
}

std::string Student::getLastName(){
	return lastName;
}
