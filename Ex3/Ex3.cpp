 // Ex3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <queue>
#include "Personne.h"
#include <unordered_map>

int main()
{
    unordered_multimap<string,Personne*> umap;
    Personne *p=new Personne("hiba", "casa", "0680146412");
    Personne *p1=new Personne("rida", "salé", "0000000000");
    priority_queue<string,vector<string>,greater<string>> q;
    umap.insert(make_pair("hiba", p));
    umap.insert(make_pair("rida", p1));
    umap.insert(make_pair("aaaa", p1));
    umap.insert(make_pair("ijjig", p));
    for (auto it : umap)
    {
        q.push(it.first);
    }
    while (!empty(q))
    {
        auto it=umap.find(q.top());
        it->second->show();
        q.pop();
    }

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
