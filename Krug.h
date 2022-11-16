#pragma once
#include"GeometrijskoTelo.h"
class Krug : public GeometrijskoTelo{
private:
	double r;
public:
	Krug(string, string, double);
	double Povrsina();
	void Nastavak();
};