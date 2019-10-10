/*
 * Teacher.h
 *
 *  Created on: 12 de jul de 2018
 *      Author: qualcomm
 */

#ifndef TEACHER_H_
#define TEACHER_H_
#include <iostream>
#include "Person.h"
using namespace std;

class Teacher: public Person
{

public:
	Teacher(string firstNameIn,string lastNameIn, int ageIn, string addressIn, string cityIn, string phoneIn);
	virtual ~Teacher();
	void setAge(int age);
	void SitInClass();
	void GradeStudent();
};

#endif /* TEACHER_H_ */
