#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double taxeActuelle, taxeNouvelle, prixActuelle;
    cin>>taxeActuelle;
    cin>>taxeNouvelle;
    cin>>prixActuelle;
    double  prixHT = prixActuelle/(1 + taxeActuelle*0.01);
    double  prixNouvelle = prixHT * (1 + taxeNouvelle*0.01);
    double nouvellePrixCentime = round(prixNouvelle*100);

    cout<<nouvellePrixCentime/100<<endl;

}