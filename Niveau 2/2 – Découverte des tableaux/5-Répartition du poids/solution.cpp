#include <iostream>
using namespace std;

int main()
{
    int nbCharrettes;
    cin>>nbCharrettes;
    while(nbCharrettes>3000){
        cin>>nbCharrettes;
    }

    double poidsCharettes[nbCharrettes] = {0};
    double poids, poidsTotal = 0;

    for(int i=0;i<nbCharrettes;i++){
        cin>>poids;
        poidsTotal += poids;
        poidsCharettes[i] = poids;
    }
    
    double poidsMoyenne = poidsTotal/nbCharrettes;

    for(int i=0;i<nbCharrettes;i++){
        cout<<poidsMoyenne - poidsCharettes[i]<<endl; 
    }
}
