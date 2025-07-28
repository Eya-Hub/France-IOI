#include <iostream>
using namespace std;

int main()
{
    int nbMarchands;
    cin>>nbMarchands;

    int prixMin = 0;
    int pos;
    for(int i=1;i<=nbMarchands;i++) {
        int prix;
        cin>>prix;
        if(i == 1) {
            pos = i;
            prixMin = prix;
        }
        if(prix < prixMin) {
            prixMin = prix;
            pos = i;
        }
        if(prixMin == prix) {
            pos = i;
        }
    }
    
    cout<<pos<<endl;
}