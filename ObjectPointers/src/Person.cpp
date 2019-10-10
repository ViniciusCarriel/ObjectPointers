/*
 * Person.cpp
 *
 *  Created on: 16 de jul de 2018
 *      Author: qualcomm
 */

#include "Person.h"
Person::Person(){

}
Person::Person(string firstNameIn,string lastNameIn, int ageIn, string addressIn, string cityIn, string phoneIn) {
	this->firstName = firstNameIn;
	this->lastName = lastNameIn;
	this->age = ageIn;
	this->address = addressIn;
	this->city = cityIn;
	this->phone = phoneIn;
}

Person::~Person() {
	std::cout << "Destructor Person called as a result of the delete keyword being used" << std::endl;
}

void Person::SetFirstName(string fName){
	this->firstName = fName;
}
void Person::SetLastName(string lName){
	this->lastName = lName;
}

void Person::setAge(int age){
	 this->age= age;
}
int Person::getAge() const{
	return 0;
}
string Person::getFirstName() const{
	return this->firstName;
}
string Person::getLastName() const{
	return this->lastName;
}
string Person::getAddress() const{
	return this->address;
}
string Person::getCity() const{
	return this->city;
}
string Person::getPhone() const{
	return this->phone;
}
void Person::SayHello()
{
	std::cout << "Hello" << std::endl;
}
