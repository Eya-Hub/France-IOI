#include <iostream>
using namespace std;

void afficherFeuille(int l,int col,char car){
    for(int i=0;i<l;i++){
        for(int j=0;j<col;j++){
            cout<<car;
        }
        cout<<endl;
    }
}


int main()
{
    int nbLignes,nbColonnes;
    char car;
    cin>>nbLignes;
    cin>>nbColonnes;
    cin>>car;
    afficherFeuille(nbLignes,nbColonnes,car);

}