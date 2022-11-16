#pragma once
#include<string>
using namespace std;
class GeometrijskoTelo{
protected:
	string naziv;
	mutable string boja;
	static int BrTela;     //statički član
public:
	GeometrijskoTelo();
	string GetNaziv() const;   //inspektor
	string GetBoja() const;		//inspektor
	void SetBoja(string);		//mutator
	static int GetBrTela();			//statička metoda
	virtual void Nastavak();
	void BojaNaziv();
	void Izvestaj() { BojaNaziv(), Nastavak(); };
	double virtual Povrsina();
};