#pragma once
#ifndef CUB_H
#define CUB_H
#include <iostream>
#include <math.h>

using namespace std;

class cub
{
private:
	double a;
	double S_poln, V;
public:
	cub();
	cub(double a);
	void set(double a);
	void get();
	double Volume(double a);
	double Surface_area(double a);
	cub(const cub&cub);
	~cub();
};
#endif 