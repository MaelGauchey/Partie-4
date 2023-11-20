// Partie 4 workshop.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include "heros.h"
#include <iostream>
#include "creature.h"
#include <string>

using namespace std;

int main()
{
	heros h = heros("JP", 10, 10);
	creature c = creature(10, 10, 5);
	c.affiche();
	h.affiche();
	h.attaque(c);
	c.affiche();
	h.affiche();
	c.attack(h);
	c.affiche();
	h.affiche();

	
}
