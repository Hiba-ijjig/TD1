// TD1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
#include <deque>
#include <Stack>
#include <List>
#include <vector>
#include <algorithm>
#include <stdlib.h> 
#include <queue>

using namespace std;
void copier_vers_lst(deque<string> dq,list <string> &lt)
{
    int i = 0;
    while (i < dq.size())
    {
        lt.push_back(dq.operator[](i));
        i++;
    }
}

void q1()
{
    string c;
    deque<string> dq;
    int nb = 0;
    list<string> lt;
    while (nb!=5)
    {
        cout << "Enter un mot: ";
        cin >> c;
        dq.push_back(c);
        nb++;
    } 
    for (auto c:dq) cout << c << "\t";
    cout << endl;
    copier_vers_lst(dq, lt);
    for (auto c:lt) cout <<c <<"\t";
    cout << endl;
    lt.sort();
    //sort(lt.begin(), lt.end());
    for (auto c : lt) cout << c << "\t";
}

void q2()
{
    stack<char> st=stack<char>();
    string ph;
    getline(std::cin, ph);
    //cout << ph;
    int t = ph.length();
    for (int i = 0; i < t; i++)
    {
        if (isalpha(ph[i])) st.push(ph[i]);
    }
    for (int i = 0; i < t; i++)
    {
        if (isalpha(ph[i])) {
            char k;
            while (isblank(st.top())) st.pop();
            k = st.top();
            if (ph[i] != k)
            {
                cout << "la phrase que vous avez entré ne sagit pas d'un palindrome\n";
                break;
            }
            st.pop();
        }
    }
    cout << "la phrase que vous avez entré est un palindrome\n";
}

void  My_split(string ch, priority_queue <string, vector<string>> &pq) {
    int n=ch.length();
    int k=0;
    string tmp = "";
    for (int i = 0; i < n; i++)
    {
        if (ch[i] == ' '|| i==n-1) {
            pq.push(tmp);
            tmp = "";
        }
        else
        {
            tmp+= ch[i];
        }
    }
}


void q3()
{
    priority_queue <string, vector<string>> pq;
    string str;
    cout << "\n Entrez la chaine\n";
    getline(cin, str);
    My_split(str,pq);
    int n = pq.size();
    for (int i = 0; i < n; i++) {
        cout << pq.top() << '\n';
        pq.pop();
    }
}


int main()
{
    q3();
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
