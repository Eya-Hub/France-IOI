#include <iostream>
#include <string>
using namespace std;

int main()
{
    char lettre;
    cin>>lettre;
    int nbLignes,nbOccurence=0;
    cin>>nbLignes;
    cin.ignore();
    for(int i=0;i<nbLignes;i++){
        string ligne;
        getline(cin,ligne);
        for(int j=0;j<(int)ligne.length();j++){
            if(ligne[j]==lettre){
                nbOccurence++;
            }
        }
    }
    cout<<nbOccurence<<endl;

}