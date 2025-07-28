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
        if(i%2==0 || i == 0){
            cout<<ligne<<endl;
        }
    }
}