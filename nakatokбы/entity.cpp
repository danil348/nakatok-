#include "entity.h"
#include <iostream>

using  namespace std;

caras::caras()
{
	satiety = 10;
}

void caras::feed(int value)
{
	cout << "0\n";
	this->satiety += value;
	if (this->satiety > 100) {
		this->satiety = 100;
	}
}

okyn::okyn()
{
	satiety = 5;
}

void okyn::feed(int value)
{
	cout << "1\n";
	this->satiety += value;
	if (this->satiety > 200) {
		this->satiety = 200;
	}
}
