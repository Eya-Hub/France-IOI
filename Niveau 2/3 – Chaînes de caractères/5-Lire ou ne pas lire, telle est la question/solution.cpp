#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nbLivres,maxL = 0;
    cin>>nbLivres;
    cin.ignore();
    for(int i=0;i<nbLivres;i++){
        string titre;
        getline(cin,titre);
        if(maxL<(int)titre.length()){
            maxL = (int)titre.length();
            cout<<titre<<endl;
        }
    }
}