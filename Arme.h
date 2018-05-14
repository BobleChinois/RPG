#pragma once

#include <iostream>
#include <string>


class Arme
{
    public :
    Arme ();
    Arme(std::string nom, int degats, int usure);
    int getDegats() const;
    void degradation(int usure, int ptUtilisation);
    void changerArme(std::string nom, int degats);
    void afficher() const;
    ~Arme();
    private :
    std::string m_nom;
    int m_degats;
    int m_usure;
};
