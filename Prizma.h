#pragma once
#ifndef PRIZMA_H
#define PRIZMA_H
#include <iostream>
#include <math.h>

using namespace std;

class prizma
{
private:
	double a, b, c, h;
	double S_poln, S_bok, S_osnov, V, p;
public:
	prizma();
	prizma(double a, double b, double c, double h);
	void set(double a, double b, double c, double h);
	void get();
	double Volume(double a, double b, double c, double h);
	double Surface_area(double a, double b, double c, double h);
	prizma(const prizma&prizma);
	~prizma();
};
#endif 