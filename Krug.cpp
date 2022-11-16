#include"GeometrijskoTelo.h"
#include"Krug.h"
#include<iostream>
#include<string>
using namespace std;
Krug::Krug(string n, string b, double k){
	naziv = n;
	boja = b;
	r = k;
	BrTela++;
}
double Krug::Povrsina(){
	return pow(r, 2) * 3.14;
}
void Krug::Nastavak(){
	cout << " ima poluprecnik: " << r << endl << endl;
}