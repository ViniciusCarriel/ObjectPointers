/*
 * Person.h
 *
 *  Created on: 16 de jul de 2018
 *      Author: qualcomm
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>
using namespace std;

class Person {

protected:
	string firstName;
	string lastName;
	string address;
	string city;
	string phone;
	int age;
	//The protected access specifier used in class Polygon is similar to private.
	//Its only difference occurs in fact with inheritance: When a class inherits another one,
	//the members of the derived class can access the protected members inherited from the base
	//class, but not its private members
	// first and last names, age, address, city, and phone along with public accessors for these.

public:
	Person();
	Person(string firstNameIn,string lastNameIn, int ageIn, string addressIn, string cityIn, string phoneIn);
	virtual ~Person();
	void SetFirstName(string fName);
	void SetLastName(string lName);
	string getFirstName()const;
	string getLastName() const;
	void setAge(int age);
	int getAge() const;
	string getAddress() const;
	string getCity() const;
	string getPhone() const;
	void SayHello();
};

#endif /* PERSON_H_ */
