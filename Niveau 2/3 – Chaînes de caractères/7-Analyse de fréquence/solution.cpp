#include <iostream>
using namespace std;

int main()
{
    int nbLignes,nbMots,tab[101] = {0},maxL=0;
    cin>>nbLignes;
    cin>>nbMots;
    for(int i=0;i<nbLignes;i++){
        for(int j=0;j<nbMots;j++){
            string mot;
            cin>>mot;
            if(maxL< (int)mot.length()){
                maxL = mot.length();
            }
            tab[mot.length()]++;
        }
    }

    for(int i=0;i<=maxL;i++){
        if(tab[i]>0){
            cout<<i<<" : "<<tab[i]<<endl;
        }
    }
}