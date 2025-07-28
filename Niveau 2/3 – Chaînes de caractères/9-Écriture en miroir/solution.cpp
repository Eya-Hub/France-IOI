#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nbLignes;
    cin>>nbLignes;
    cin.ignore();
    for(int i=0;i<nbLignes;i++){
        string ligne;
        getline(cin,ligne);
        for(int j=((int)ligne.length())-1;j>=0;j--){
            cout<<ligne[j];
        }
        cout<<endl;
    }
}