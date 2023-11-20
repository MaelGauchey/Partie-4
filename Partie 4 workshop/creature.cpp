#include "creature.h"
#include "heros.h"
#include <iostream>
using namespace std;

creature::creature(int pv, int pa, int lvl)
{
	this->pv = pv;
	this->pa = pa;
	this->lvl = lvl;
}

void creature::affiche()
{
	cout << "------------------------------" << endl;
	cout << "Une creature sauvage apparait" << endl;
	cout << "Point de vie :"<< getpv() << endl;
	cout << "Point d'attaque :" << getpa() << endl;
	cout << "Level :" << getlvl() << endl;
	cout << "------------------------------" << endl;
}

void creature::attack(heros& h)
{
	h.subitdegat(getpa());
}

void creature::subitdegat(int degat)
{
	pv -= degat;
}

int creature::getpv()
{
	return this->pv;
}

int creature::getpa()
{
	return this->pa;
}

int creature::getlvl()
{
	return this->lvl;
}