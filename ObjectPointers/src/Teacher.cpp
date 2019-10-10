/*
 * Teacher.cpp
 *
 *  Created on: 12 de jul de 2018
 *      Author: qualcomm
 */

#include "Teacher.h"

Teacher::Teacher(string firstNameIn,string lastNameIn, int ageIn, string addressIn, string cityIn, string phoneIn)
		: Person (firstName, lastName, ageIn, addressIn, cityIn, phoneIn){
	// TODO Auto-generated constructor stub
}

Teacher::~Teacher() {
	// TODO Auto-generated destructor stub
	cout << "Teacher destructor method called" << endl;
}

void Teacher::setAge(int age)
{
	if (age < 25)
	{
		std::cout << "No way you are a teacher at that age." << std::endl;
	}
	else
	{
		this->age = age;
	}
}

void Teacher::SitInClass(){
	cout << "Sitting at front of class" << endl;
}
void Teacher::GradeStudent(){
	cout << "Student Graded" << endl;
}
