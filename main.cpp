/*******************************************************
Nom           : main.cpp
Role          : Manipulation dans le main
Auteur        : MAHINC Mathias
Version       : V1.0 du 13/10/2026
Licence       : GPL
IDE           : Visual Studio Code
OS            : Linux
Compilation   : g++ -Wall -pedantic -std=c++11 main.cpp Voiture.cpp -o application_voiture
********************************************************/

#include "CVoiture.h"
#include <iostream>

using namespace std;

int main()
{
    CVoiture voiture1("Essence", "Peugeot", "208", 100);
    CVoiture voiture2("Diesel", "Renault", "Clio", 90);

    cout << "Informations voiture 1 :" << endl;
    voiture1.afficher();

    voiture1.demarrer();
    voiture1.accelerer(50);
    voiture1.ralentir(20);
    voiture1.arreter();

    cout << endl;

    cout << "Informations voiture 2 :" << endl;
    voiture2.afficher();

    cout << endl;

    cout << "Deplacement voitures" << endl;

    voiture1.deplacer(3, 4);
    voiture1.deplacer(2, 0);

    cout << "Position voiture 1 :" << endl;
    voiture1.afficherPosition();

    voiture2.deplacer(6, 8);
    voiture2.deplacer(0, 3);

    cout << "Position voiture 2 :" << endl;
    voiture2.afficherPosition();

    cout << endl;

    cout << "Test avec valeurs negatives" << endl;

    voiture1.deplacer(-2, -3);

    cout << "Position voiture 1 apres le deplacement negatif :" << endl;
    voiture1.afficherPosition();

    return 0;
}
