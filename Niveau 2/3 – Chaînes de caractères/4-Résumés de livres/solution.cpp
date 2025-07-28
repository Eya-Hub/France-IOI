#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nbLivres,longueurMinimale;
    cin>>nbLivres;
    cin>>longueurMinimale;
    cin.ignore();
    for(int i=0;i<nbLivres*2;i++){
        string titre,resume;
        getline(cin,titre);
        getline(cin,resume);
        if((int)resume.length()<longueurMinimale){
            cout<<titre<<endl;
        }
    }
}