#pragma once
#include <string>
#include <iostream>
using namespace std;

class shape
{
private:
	string name;
	double flache;

public:
	shape(string name,double flache);
	shape();

	string get_name ()const;
	void set_name(string name);
	double get_flache()const;
	void set_flache(double flache);
	~shape();
};


class inmultire 
{
private:
	double n;

public:
	inmultire(double elem) : n(elem) {}
	double operator () (shape* s) const 
	{
		s->set_flache(s->get_flache() * n);
		return s->get_flache();
	}

};

class impartire
{
private:
	double m;

public:
	impartire(double elem) : m(elem) {} 
	double operator () (shape* s) const 
	{
		s->set_flache(s->get_flache() / m);
		return s->get_flache();
	}

};

class form
{
public:
	void operator() (shape* s) const 
	{
		cout << s->get_name() << " " << s->get_flache() << " !\n";
	}
};