#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
	string name;
	long int id;
	int age;
public:
	Person();
	Person(string _name, long int _id, int _age);
	~Person();
	void printPerson();
};
