#pragma once

#include <iostream>
#include <string>
#include "Arme.h"


class Personnage
{
    public:
    Personnage();
    Personnage(std::string nomArme, int degatsArme, int rad);
    ~Personnage();
    void recevoir_Degats(int nbDegats);
    void attaquer(Personnage &cible);
    void soin(int qtePtVie);
    void changerArme(std::string nomNlleArme, int degatsNlleArme);
    bool vivant();
    void afficherEtat() const;


    private:
    int m_vie;
    int m_rad;
    Arme m_arme;
};
