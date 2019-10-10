#include "Course.h"
#include <iostream>
using namespace std;

int main(){
	// all new are assigned to pointers
	Teacher *teach = new Teacher("Joana", "Oliveira", 15,"Av brasil", "Rio de Janeiro", "74684646565");

	Student *studArray = new Student[3];

	studArray = new Student("vini", "carriel",19, "Rua treveseis","ourinhos","33265321");
	studArray++;
	studArray = new Student("saulo", "silva",20, "Rua treze","ourinhos","33245689");
	studArray++;
	studArray = new Student("vincent", "silva",25, "Rua dos bobo","Diadema","956842652");;

	string str =string("Intermediate C++");
	Course *course = new Course(studArray,3,teach,str);
	cout << "This are the students enrolled" <<endl;

	for(int i = 0; i<3;i++){
		cout << "Student " << i << "name is " << (course->numStudents) <<endl;
	}
	cout << "Please work teacher:\n";
	course->getTeacher()->SitInClass();
	course->getTeacher()->GradeStudent();
	cout << "Course name is " << course->getName() << "\n";
	course->getTeacher()->setAge(15);
	course->getStudentArray()->setAge(3);

	Person *p = new Teacher("Bruna", "costa", 15, "guararapes", "SP","5421342");

	p->setAge(1);

	delete course;

}
