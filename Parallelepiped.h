#pragma once
#ifndef PARALLELEPIPED_H
#define PARALLELEPIPED_H
#include <iostream>
#include <math.h>
#include "stdafx.h"


class parallelepiped
{
    private:
		double a, b, c;
		double S_poln, V;
	public:
		parallelepiped(double a, double b, double c);
		parallelepiped();
		void set(double a, double b, double c);
		void get();
		double Volume(double a, double b, double c);
		double Surface_area(double a, double b, double c);
		parallelepiped(const parallelepiped&parallelepiped);
		~parallelepiped();
};
#endif 
