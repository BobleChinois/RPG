#include <iostream>
#include <string>
#include "Arme.h"

using namespace std;

class Personnage
{
    public:
    Personnage() : m_vie(100), m_rad(10), m_arme(Arme)
    {

    }
    Personnage(string nomArme,int degatsArme,int rad) : m_vie(100),m_arme(nomArme, degatsArme),m_rad(rad)
    {

    }
    void recevoirDegats(int nbDegats)
    {
        m_vie -= nbDegats;
        if (m_vie<0)
        {
            m_vie=0;
        }

    }
    void attaquer(Personnage &cible)
    {
        cible.recevoirDegats(m_arme.getDegats());
    }
    void soin(int qtePtVie)
    {
        m_vie+=qtePtVie;

        if (m_vie>100)
        {
            m_vie=100;
        }
    }
    void changerArme(string nomNlleArme, int degatsNlleArme)
    {
        m_arme.changerArme(nomNlleArme, degatsNlleArme);
    }
    bool vivant()
    {
            return m_vie>0;
    }
    void afficherEtat() const
    {
        cout<<"Vie : "<<m_vie<<endl;
        cout<<"Radioactivité : "<<m_rad<<endl;
        m_arme.afficher();
    }
    ~Personnage()
    {

    }

    private:
    int m_vie;
    int m_rad;
    Arme m_arme;
};
