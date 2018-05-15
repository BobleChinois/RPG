#pragma once

#include <iostream>
#include <string>
#include "Arme.h"


class Personnage
{
    int m_vie, m_rad;
    Arme m_arme;

    public:
    Personnage();
    Personnage(std::string nomArme, int degatsArme, int usureArme);
    ~Personnage();
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void soin(int qtePtVie);
    void changerArme(std::string nomNlleArme, int degatsNlleArme);
    bool vivant() const;
    void afficherEtat() const;

};
