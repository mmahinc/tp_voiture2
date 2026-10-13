/*******************************************************
Nom           : CVoiture.cpp
Role          : Modification de la classe CVoiture (méthodes)
Auteur        : MAHINC Mathias
Version       : V1.0 du 13/10/2026
Licence       : GPL
IDE           : Visual Studio Code
OS            : Linux
Compilation   : g++ -Wall -pedantic -std=c++11 -c Voiture.cpp
********************************************************/

#include "CVoiture.h"
#include <iostream>
#include <cmath>

using namespace std;

CVoiture::CVoiture(string c, string ma, string mo, int p)
{
    carburant = c;
    marque = ma;
    modele = mo;
    puissance = p;
    vitesse = 0;

    posX = 0;
    posY = 0;
    kilometrageTotal = 0;
}

void CVoiture::accelerer(int v)
{
    vitesse = vitesse + v;
}

void CVoiture::afficher()
{
    cout << marque << endl;
    cout << modele << endl;
    cout << carburant << endl;
    cout << puissance << endl;
    cout << vitesse << endl;
}

void CVoiture::arreter()
{
    vitesse = 0;
}

void CVoiture::demarrer()
{
    cout << "La voiture demarre" << endl;
}

void CVoiture::ralentir(int v)
{
    vitesse = vitesse - v;
}

void CVoiture::deplacer(double deltaX, double deltaY)
{
    posX = posX + deltaX;
    posY = posY + deltaY;

    kilometrageTotal = kilometrageTotal + sqrt(deltaX * deltaX + deltaY * deltaY);
}

void CVoiture::afficherPosition()
{
    cout << "Position X : " << posX << " km" << endl;
    cout << "Position Y : " << posY << " km" << endl;
    cout << "Kilometrage total : " << kilometrageTotal << " km" << endl;
}

double CVoiture::getPosX()
{
    return posX;
}

double CVoiture::getPosY()
{
    return posY;
}

double CVoiture::getKilometrageTotal()
{
    return kilometrageTotal;
}

void CVoiture::setPosX(double x)
{
    posX = x;
}

void CVoiture::setPosY(double y)
{
    posY = y;
}
