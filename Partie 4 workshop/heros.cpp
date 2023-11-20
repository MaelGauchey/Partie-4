#include "heros.h"
#include <iostream>
#include "creature.h"
using namespace std;

heros::heros(string nom, int pv, int pa)
{
	this->nom = nom;
	this->pv = pv;
	this->pa = pa;
	
}

void heros::affiche()
{
	cout << "------------------------------" << endl;
	cout << "Voici "<< nom << endl;
	cout << "Point de vie :" << getpv() << endl;
	cout << "Point d'attaque :" << getpa() << endl;
	cout << "------------------------------" << endl;
}

int heros::attaque(creature& c)
{
	c.subitdegat(getpa());
	return 0;
}

void heros::subitdegat(int degat)
{
	pv -= degat;
}

int heros::getpv()
{
	return this->pv;
}

int heros::getpa()
{
	return this->pa;
}



