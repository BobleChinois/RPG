#include <iostream>

#include "Arme.h"

using namespace std;


Arme::Arme():m_nom("Poings"), m_degats(10), m_usure(20)
{

}
Arme::Arme(string nom, int degats, int usure):m_nom(nom),m_degats(degats),m_usure(usure)
{

}
Arme::~Arme()
{

}
int Arme::getDegats() const
{
    return m_degats;
}
void Arme::degradation(int usure, int ptUtilisation)
{
    m_usure-=ptUtilisation;
    if (m_usure<0)
    {
        m_usure=0;
        m_degats/=2;
    }
}
void Arme::changerArme(string nom, int degats)
{
    m_nom=nom;
    m_degats=degats;
}
void Arme::afficher() const
{
    cout<<"Arme : "<<m_nom<<endl<<"Dégâts : "<<m_degats<<endl<<"Usure : "<<m_usure<<endl;
}

