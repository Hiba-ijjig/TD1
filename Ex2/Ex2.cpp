// Ex2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include <Vector>
#include <algorithm>

using namespace std;

auto lambda = [](string s) {
	int n = s.length();
	string tmp = "";
	for (int i = 0; i < n; i++)
	{
		char k = s[i];
		if (k == 'a' || k == 'o' || k == 'e' || k == 'i' || k == 'y' || k == 'u')
		{
			k = '*';
		}
		tmp += k;
	}
	return tmp;
};
auto lambda2 = [](string s) {
	string tmp(s);
	transform(s.begin(), s.end(), tmp.begin(), toupper);
	return tmp;
};

vector<string>  MyFonction() {
	vector<string> lst;
	string tmp="";
	cout << "entrez une chaine\n";
	cout << "Taper stop si vous voullez terminer\n";
	while (true) {
		cin >> tmp;
		if (tmp == "stop") break;
		lst.push_back(tmp);
	}
	//affichage
	return lst;
}


void trons()
{
	vector<string> lst = MyFonction();
	vector<string> tr(lst.size());
	transform(lst.begin(), lst.end(), tr.begin(), lambda);
	cout << "************************************\n";
	for (int i = 0; i < tr.size(); i++)
	{
		cout << tr.at(i) << "\t";
	}
}

void trons2()
{
	vector<string> lst = MyFonction();
	vector<string> tr(lst.size());
	transform(lst.begin(), lst.end(), tr.begin(),lambda2 );
	cout << "************************************\n";
	for (int i = 0; i < tr.size(); i++)
	{
		cout << tr.at(i) << "\t";
	}
}






int main()
{
	trons2();
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
