#include <iostream>
#include <string>
#include "Personnage.h"

using namespace std;

int main()
{
    Personnage ian, canigou;

    ian.attaquer(canigou);
    canigou.attaquer(ian);
    cout<<"Tour 1"<<endl;
    cout<<"Ian"<<endl;
    ian.afficherEtat();
    cout<<"Canigou"<<endl;
    canigou.afficherEtat();
    ian.soin(20);
    canigou.attaquer(ian);
    cout<<"Tour 2"<<endl;
    cout<<"Ian"<<endl;
    ian.afficherEtat();
    cout<<"Canigou"<<endl;
    canigou.afficherEtat();
    ian.changerArme("Double Shotgun",100);
    ian.attaquer(canigou);
    cout<<"Tour 3"<<endl;
    cout<<"Ian"<<endl;
    ian.afficherEtat();
    cout<<"Canigou"<<endl;
    canigou.afficherEtat();
    return 0;
}
