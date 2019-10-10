/*
 * Student.cpp
 *
 *  Created on: 12 de jul de 2018
 *      Author: qualcomm
 */

#include "Student.h"

Student::Student(){};
Student::Student(string firstNameIn,string lastNameIn, int ageIn, string addressIn, string cityIn, string phoneIn)
	: Person (firstNameIn, lastNameIn, ageIn, addressIn, cityIn, phoneIn)
{
	// TODO Auto-generated constructor stub
}

Student::~Student() {
	// TODO Auto-generated destructor stub
	cout << "Student destructor method called" << endl;
}

void Student::setAge(int age)
{
	if (age < 5)
	{
		std::cout << "Student age needs to at least 5 years old." << std::endl;
	}
	else
	{
		this->age = age;
	}
}

void Student::SitInClass(){
	cout << "Sitting in main theater" << endl;
}
void Student::SayHello(){
	cout << "Hello im student " << this->getFirstName() << endl;
}
