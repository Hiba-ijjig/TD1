#pragma once
#include <iostream>

using namespace std;

class Personne
{
	string nom;
	string adresse;
	string tele;
public:
	Personne(string nom,string adresse,string tele) {
		this->nom = nom;
		this->adresse = adresse;
		this->tele = tele;
	}
	void show()
	{
		cout << "\nnom: " << this->nom << "\tadresse: " << this->adresse << "\t tele: " << this->tele << "\n";
	}
};

