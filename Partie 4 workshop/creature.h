#pragma once
class heros;

class creature
{ private:
	int pv;
	int pa;
	int lvl;

public:
	creature(int pv, int pa, int lvl);
	void affiche();
	void attack(heros& h);
	void subitdegat(int degat);
	int getpv();

	int getpa();

	int getlvl();


};

