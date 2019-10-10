/*
 * Course.h
 *
 *  Created on: 12 de jul de 2018
 *      Author: qualcomm
 */

#ifndef COURSE_H_
#define COURSE_H_
#include "Teacher.h"
#include "Student.h"
#include <vector>

class Course {
private:
	Student *studArray;
	Teacher *teacher;
	string name;
public:
	vector <Student> vecStd;
	int numStudents;
	//Student array[x][y];
	Course(Student *studIn, int numStudents, Teacher *teacherIn, string courseName);
	Course(vector<Student> vecStudent,Teacher teacherIn,string courseName);
	virtual ~Course();
	string getName();
	Student* getStudentArray();
	Teacher *getTeacher();
	void setNumStudents(int numStudents);
};

#endif /* COURSE_H_ */
