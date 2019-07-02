#pragma once
#ifndef PIRAMIDA_H
#define PIRAMIDA_H
#include <iostream>
#include <math.h>

using namespace std;

class piramida 
{
    private:
	float a, b, h, H_a, H_b;
	float S_poln, S_bok_a, S_bok_b, S_osnov, V, p;
    public:
	piramida(float a, float b, float h, float H_a, float H_b);
	piramida();
	void set(float a, float b, float h, float H_a, float H_b);
	void get();
	void Decision();
	piramida(const piramida &piramida);
	~piramida();
};
#endif 