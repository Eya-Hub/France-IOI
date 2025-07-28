#include <iostream>
using namespace std;

int main()
{
    int nbProduits,  nbPersonnes, numProd;
    cin>>nbProduits;
    cin>>nbPersonnes;
    int produits[nbProduits] = {0};

    while(nbPersonnes>1000){
        cout<<"saisir une  valeur inferieur ou egale a 1000"<<endl;
        cin>>nbPersonnes;
    }

    while(nbPersonnes--){
        cin>>numProd;
        produits[numProd]++;
    }

    for(int i=0;i<nbProduits;i++){
        cout<<produits[i]<<endl;
    }
}
