#include <iostream>
#include <string>

using namespace std;

class Arme
{
    public :
    Arme():m_nom("Poings"), m_degats(10), m_usure(20)
    {

    }
    Arme(std::string nom, int degats, int usure):m_nom(nom),m_degats(degats),m_usure(usure)
    {

    }
    int getDegats() const
    {
        return m_degats;
    }
    void degradation(int usure, int ptUtilisation)
    {
        m_usure-=ptUtilisation;
        if (m_usure<0)
        {
            m_usure=0;
            m_degats/=2;
        }
    }
    void changerArme(std::string nom, int degats)
    {
        m_nom=nom;
        m_degats=degats;
    }
    void afficher() const
    {
        cout<<"Arme : "<<m_nom<<endl<<"Dégâts : "<<m_degats<<endl<<"Usure : "<<m_usure<<endl;
    }
    private :
    std::string m_nom;
    int m_degats;
    int m_usure;
};
