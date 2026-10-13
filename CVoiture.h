/*******************************************************
Nom           : CVoiture.h
Role          : Modification de la classe CVoiture (attributs)
Auteur        : MAHINC Mathias
Version       : V1.0 du 13/10/2026
Licence       : GPL
IDE           : Visual Studio Code
OS            : Linux
Compilation   : g++ -Wall -pedantic -std=c++11 -c Voiture.cpp
********************************************************/

#ifndef VOITURE_H
#define VOITURE_H

#include <string>

class CVoiture
{
private:
    std::string carburant;
    std::string marque;
    std::string modele;
    int puissance;
    int vitesse;

    double posX;
    double posY;
    double kilometrageTotal;

public:
    CVoiture(std::string c, std::string ma, std::string mo, int p);

    void accelerer(int v);
    void afficher();
    void arreter();
    void demarrer();
    void ralentir(int v);

    void deplacer(double deltaX, double deltaY);
    void afficherPosition();

    double getPosX();
    double getPosY();
    double getKilometrageTotal();

    void setPosX(double x);
    void setPosY(double y);
};

#endif
