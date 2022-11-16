#include"GeometrijskoTelo.h"
#include"Krug.h"
#include"Trougao.h"
#include<iostream>
#include<string>
#include<list>
#include<stack>
#include<queue>
#include<fstream>
using namespace std;
void kodiraj(string rec) {
	string vratiKodirano = "";
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < rec.length(); j++) {
			vratiKodirano += rec[j] ^ i;
		}
		cout << vratiKodirano << "\n";
		vratiKodirano = "";
	}
}
template<typename i, typename s>
class Auta{
private:
	i ime;
	s SnagaORcenaORboja;
public:
	void SetAuta(i ImeA, s scb){
		ime = ImeA;
		SnagaORcenaORboja = scb;
	}
	i GetIme(){
		return ime;
	}
	s GetsnagaORcenaORboja(){
		return SnagaORcenaORboja;
	}
	s SetSnagaORcenaORboja(s scb){
		SnagaORcenaORboja = scb;
	}
};
class Brojevi{
public:
	int prirodni;
	double realni;
public:
	Brojevi(int pr = 0, double real = 0):prirodni(pr),realni(real){}
	friend Brojevi operator+
		(Brojevi, Brojevi);
};
Brojevi operator+(Brojevi c1, Brojevi c2){
	return Brojevi(c1.prirodni + c2.prirodni,
		c1.realni + c2.realni);
}
int Uporedi(const void* a, const void* b){
	int* ptr1 = (int*)a;
	int* ptr2 = (int*)b;
	if (*ptr1 < *ptr2){
		return -1;
	}
	else if (*ptr1 > *ptr2){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	kodiraj("PQF@ML");
	GeometrijskoTelo* gt[] = { new Krug("krug1","crvena",3), new Trougao("trougao1","plava",3,3,3) };
	pair<Brojevi, string> parovi(Brojevi(2, 4.5), "Nikola RT-71/20");
	cout << "Pair struktura sa objektom tipa Brojevi i stringom:" << endl;
	cout << "Objekat i vrijednost: " << parovi.first.prirodni << ", " << parovi.first.realni << "\t" << "String: " << parovi.second << endl;
	gt[0]->Izvestaj();
	gt[1]->Izvestaj();
	double pov1 = gt[0]->Povrsina();
	string naz1 = gt[0]->GetNaziv();
	double pov2 = gt[1]->Povrsina();
	string naz2 = gt[1]->GetNaziv();
	gt[0]->SetBoja("zelena");
	gt[0]->Izvestaj();
	cout << "Ukupno tela: " << GeometrijskoTelo::GetBrTela() << endl;
	cout << "U reci '" << naz2 << "' ima ukupno " << naz2.length() << " karaktera." << endl;
	cout << "U reci '" << naz1 << "' ima ukupno " << naz1.length() << " karaktera." << endl;
	cout << "Povrsina kruga: " << naz1 <<" je: " << pov1 << endl;
	cout << "Povrsina trougla: "<<naz2 <<" je: " << pov2 << endl;
	Brojevi c = *new Brojevi();
	cout << "Objekat klase brojevi prije preklapanja operatora '+':" << endl;
	cout << "Prirodan broj: " << c.prirodni << " Realan broj: " << c.realni << endl;
	c = Brojevi(4,9.9) + Brojevi(7,5.5);
	cout << "Objekat klase brojevi nakon preklapanja operatora '+':" << endl;
	cout << "Prirodan broj: " << c.prirodni << " Realan broj: " << c.realni << endl;
	stack<Brojevi> stek;
	stek.push(*new Brojevi(2, 2.2));
	stek.push(*new Brojevi(3, 2.3));
	stek.push(*new Brojevi(4, 2.4));
	stek.push(*new Brojevi(5, 2.5));
	while (!stek.empty()){
		cout<< stek.top().prirodni;
		stek.pop();
		cout << endl;
	}
	Auta <string, int> obj1;
	obj1.SetAuta("BMW", 300);
	cout << "Auto: " << obj1.GetIme() <<" "<<obj1.GetsnagaORcenaORboja()<< endl;
	Auta <string,string> obj2;
	obj2.SetAuta("Mercedes", "Crvena");
	cout << "Auto: " << obj2.GetIme() << " " << obj2.GetsnagaORcenaORboja() << endl;
	Auta <string, double> obj3;
	obj3.SetAuta("Audi", 59000.00);
	cout << "Auto: " << obj3.GetIme() << " " << obj3.GetsnagaORcenaORboja() << endl;
	cout << endl;
	list<string> sportovi = { "Fudbal","Kosarka","Tenis" };
	sportovi.push_front("Rukomet");
	sportovi.push_back("Vaterpolo");
	list<string>::iterator it = find(sportovi.begin(), sportovi.end(), "Kosarka");
	if (it != sportovi.end()){
		sportovi.insert(it, "Odbojka");
	}
	for (string n : sportovi){
		cout <<n<< "\t";
	}
	queue<string> zapisi;
	int br_reci;
	int i = 0;
	string str;
	cout << endl;
	cout << "Unesite broj reci: ";cin >> br_reci;
	cout << "Unesite " << br_reci << " reci:\n";
	do {
		cin >> str;
		zapisi.push(str);
		str.clear();
		i++;
	} while (i<br_reci);
	cout << "Reci iz queue:" << endl;
	cout << "***  ";
	while (!zapisi.empty()){
		cout << zapisi.front()<<"\t";
		zapisi.pop();
	}
	cout << "  ***";
	cout << endl;
	int niz[] = {-5,-3,-88,-9,8,4,88,109};
	int num = 8;
	qsort(niz, num, sizeof(int), Uporedi);
	for (int i = 0; i < num; i++){
		cout << niz[i] << endl;
	}
	cout << endl;
	ifstream ulaz;
	ulaz.open("Fajl.txt");
	if (ulaz.fail()){
		cerr << "Greska pri otvaranju fajla!"<<endl;
		exit(1);
	}
	string items[4] = {"","","",""};
	while (!ulaz.eof()){
		ulaz >> items[0];
		ulaz >> items[1];
		ulaz >> items[2];
		ulaz >> items[3];
	}
	for(int i=0;i<4;i++)
		cout << items[i] << " ";
	cout << endl;
	ofstream izlaz;
	izlaz.open("Fajl2.txt");
	if (ulaz.fail()){
		cerr << "Greska pri otvaranju fajla!" << endl;
		exit(1);
	}
	string items2[4] = { "Nikola ","Vuckovic ","RT-","71/20" };
	for(int j=0;j<4;j++){
		izlaz << items2[j];
	}
	cout << endl;
	system("pause");
	return 0;
}