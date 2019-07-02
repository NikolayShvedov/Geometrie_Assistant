#pragma once
#ifndef CUB_H
#define CUB_H
#include <iostream>
#include <math.h>

using namespace std;

class cub
{
private:
	float a;
	float S_poln, V;
public:
	cub();
	cub(float a);
	void set(float a);
	void get();
	void Decision();
	cub(const cub&cub);
	~cub();
};
#endif 