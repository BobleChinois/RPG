#pragma once

#include <string>

class Arme
{
    std::string m_nom;
    int m_degats, m_usure;

    public :
    Arme ();
    Arme(std::string nom, int degats, int usure);
    ~Arme();
    int getDegats() const;
    void degradation(int usure, int ptUtilisation);
    void changerArme(std::string nom, int degats);
    void afficher() const;


};
