#pragma once
#include <string>
#include "creature.h"
using namespace std;

class heros
{
private:
	string nom;
	int pv;
	int pa;

public: 
	heros(string nom, int pv, int pa);
	void affiche();
	int attaque(creature& c);
	void subitdegat(int degat);
	int getpv();
	int getpa();

};

