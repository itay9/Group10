#include "student.h"

Student::Student(): Person()
{
	this->average = 100;
	this->institute = "SCE";
}

Student::~Student()
{
}

void Student::printStudent()
{
	this->printPerson();
	cout << "average: " << this->average << "\n";
	cout << "institute: " << this->institute << "\n";
}

