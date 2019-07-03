#pragma once
#ifndef PRIZMA_H
#define PRIZMA_H
#include <iostream>
#include <math.h>

using namespace std;

class prizma
{
private:
	float a, b, c, h;
	float S_poln, S_bok, S_osnov, V, p;
public:
	prizma();
	prizma(float a, float b, float c, float h);
	void set(float a, float b, float c, float h);
	void get();
	void Decision();
	prizma(const prizma&prizma);
	~prizma();
};
#endif 