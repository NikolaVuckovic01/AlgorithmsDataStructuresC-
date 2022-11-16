#include"GeometrijskoTelo.h"
#include<iostream>
#include<string>
using namespace std;
int GeometrijskoTelo::BrTela = 0;
GeometrijskoTelo::GeometrijskoTelo(){
	naziv = "Nema naziv";
	boja = "Nema boju";
}
string GeometrijskoTelo::GetNaziv() const{
	return naziv;
}
string GeometrijskoTelo::GetBoja() const{
	return boja;
}
void GeometrijskoTelo::SetBoja(string b){
	cout << "*****IZMENA*****" << endl;
	boja = b;
}
int GeometrijskoTelo::GetBrTela(){
	return BrTela;
}
void GeometrijskoTelo::Nastavak(){
	cout << "Geometrijsko telo " << endl;
}
void GeometrijskoTelo::BojaNaziv(){
	cout << "Naziv tela: " << naziv << " " << "Boja tela: " << boja;
}

double GeometrijskoTelo::Povrsina(){
	return 0;
}
