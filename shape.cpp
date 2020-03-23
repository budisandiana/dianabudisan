#include "shape.h"

//constructor
shape::shape()
{
}
shape::shape(string name, double flache)
{
	this->name = name;
	this->flache = flache;
}

//destructor
shape::~shape()
{
}

//getter for name
string shape::get_name()const 
{
	return name;
}

//getter for flache
double shape::get_flache()const 
{
	return flache;
}

//setter for name
void shape::set_name(string name) 
{
	this->name=name;
}

//setter for flache
void shape::set_flache(double flache) 
{
	this->flache=flache;
}
