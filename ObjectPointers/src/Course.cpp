/*
 * Course.cpp
 *
 *  Created on: 12 de jul de 2018
 *      Author: qualcomm
 */

#include "Course.h"

/*//array copy
Course::Course(Student studIn[],int numStudents,Teacher teacherIn,string courseName){
	// TODO Auto-generated constructor stub
	this->*studArray = new Student[numStudents];
	for(int i = 0;i<numStudents;i++){
		this->studArray[i] = studIn[i];
	}
	this->teacher = teacherIn;
	this->name = courseName;
}*/

//array pointer
Course::Course(Student *studIn, int numStudents, Teacher *teacherIn, string courseName){
	// TODO Auto-generated constructor stub
	//this->studArray = new Student[numStudents];
	this->studArray = studIn;
	this->numStudents = numStudents;
	this->teacher = teacherIn;
	this->name = courseName;
}
/*
Course::Course(vector<Student> vec,Teacher teacherIn,string courseName){
	// TODO Auto-generated constructor stub
	this->vecStd = vec;
	this->numStudents = numStudents;
	this->teacher = teacherIn;
	this->name = courseName;
}*/

Course::~Course() {
	// TODO Auto-generated destructor stub
	delete this->studArray;
	delete this->teacher;

}
string Course::getName(){
	return this->name;
}
Student* Course::getStudentArray(){
	return this->studArray;
}
Teacher *Course::getTeacher(){
	return this->teacher;
}
void Course::setNumStudents(int numStudents){

	this->numStudents = numStudents;
}

