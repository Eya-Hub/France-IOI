#include <iostream>
#include <string>
using namespace std;

int main()
{
    string titre,auteur,nvTitre,nvAuteur;
    getline(cin,titre);
    getline(cin,auteur);

    for(int i=0;i<(int)titre.length();i++){
        if(!(titre[i] == 'A' || titre[i] == 'O' || titre[i] == 'E' || titre[i] == 'I' || titre[i] == 'Y' || titre[i] == 'U' || titre[i] == ' ')){
            nvTitre += titre[i];

        }
    }

    for(int i=0;i<(int)auteur.length();i++){
        if(!(auteur[i] == 'A' || auteur[i] == 'O' || auteur[i] == 'E' || auteur[i] == 'I' || auteur[i] == 'Y' || auteur[i] == 'U' || auteur[i] == ' ')){
            nvAuteur += auteur[i];
        }
    }
    cout<<nvTitre<<endl;
    cout<<nvAuteur<<endl;
}