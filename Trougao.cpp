#include"GeometrijskoTelo.h"
#include"Trougao.h"
#include<iostream>
#include<string>
using namespace std;

Trougao::Trougao(string n, string bojaP, double a1, double b1, double c1){
	naziv = n;
	boja = bojaP;
	a = a1;
	b = b1;
	c = c1;
	BrTela++;
}

double Trougao::Povrsina(){
	double s = (a + b + c) / 2;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}
void Trougao::Nastavak(){
	cout << " ima stranice: " << a << " " << b << " " << c << endl << endl;
}
