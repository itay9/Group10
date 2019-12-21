#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person
{// Class Person
protected:
	string name;
	long int id;
	int age;
public:
	Person();//Def.Constructor
	Person(string _name, long int _id, int _age);//Constructor
	~Person();//DTOR
	void printPerson();//Print Func
};
