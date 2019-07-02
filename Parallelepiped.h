#pragma once
#ifndef PARALLELEPIPED_H
#define PARALLELEPIPED_H
#include <iostream>
#include <math.h>

class parallelepiped
{
    private:
	float a, b, c;
	float S_poln, V;
	public:
		parallelepiped(float a, float b, float c);
		parallelepiped();
		void set(float a, float b, float c);
		void get();
		void Decision();
		parallelepiped(const parallelepiped&parallelepiped);
		~parallelepiped();
};
#endif 
