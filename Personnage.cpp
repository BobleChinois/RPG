#include <iostream>

#include "Personnage.h"

using namespace std;

Personnage::Personnage():m_vie(100), m_rad(10)
    {

    }
Personnage::Personnage(string nomArme,int degatsArme, int usureArme) : m_vie(100), m_rad(10), m_arme(nomArme, degatsArme, usureArme)
    {

    }
Personnage::~Personnage()
    {

    }
void Personnage::recevoirDegats(int nbDegats)
    {
        m_vie -= nbDegats;
        if (m_vie<0)
            {
                m_vie=0;
            }

    }
void Personnage::attaquer(Personnage &cible)
    {
        cible.recevoirDegats(m_arme.getDegats());
    }
void Personnage::soin(int qtePtVie)
    {
        m_vie+=qtePtVie;

        if (m_vie>100)
        {
            m_vie=100;
        }
    }
void Personnage::changerArme(string nomNlleArme, int degatsNlleArme)
    {
        m_arme.changerArme(nomNlleArme, degatsNlleArme);
    }
bool Personnage::vivant() const
    {
            return m_vie>0;
    }
void Personnage::afficherEtat() const
    {
        cout<<"Vie : "<<m_vie<<endl;
        cout<<"Radioactivité : "<<m_rad<<endl;
        m_arme.afficher();
    }

