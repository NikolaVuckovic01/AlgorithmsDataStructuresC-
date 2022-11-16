#pragma once
#include"GeometrijskoTelo.h"
class Trougao :public GeometrijskoTelo{
private:
	double a, b, c;
public:
	Trougao(string, string, double, double, double);
	double Povrsina();
	void Nastavak();
};