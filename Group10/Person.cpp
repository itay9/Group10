#include "Person.h"

Person::Person()
{
	// def ctor
	this->name = "jhon daw";
	this->id = 123456789;
	this->age = 20;
}

Person::Person(string _name, long int _id, int _age)
{
	if (_name.length() > 10)
		_name.erase(10);

	this->name = _name;
	this->id = _id;
	this->age = _age;
}
