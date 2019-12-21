#pragma once
#include "Person.h"

using namespace std;

class Student : public Person {
protected:
	int average;
	string institute;
	
public:
	Student();
	Student(string _name, long int _id, int _age, int avg, string inst);
	~Student();
	void printStudent();
}; //student
	
  
