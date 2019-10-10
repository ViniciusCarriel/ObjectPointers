/*
 * Student.h
 *
 *  Created on: 12 de jul de 2018
 *      Author: qualcomm
 */

#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
#include "Person.h"
using namespace std;

class Student: public Person{


public:
	Student();
	Student(string firstNameIn,string lastNameIn, int ageIn, string addressIn, string cityIn, string phoneIn);
	virtual ~Student();
	virtual void setAge(int age);
	void SitInClass();
	void SayHello();
};

#endif /* STUDENT_H_ */
