#include <iostream>
using namespace std;

int main()
{
    int nbPersonnes;
    cin>>nbPersonnes;
    string prenom,nom;
    for(int i=0;i<nbPersonnes;i++){
        cin>>prenom;
        cin>>nom;
        cout<<nom<<" "<<prenom<<endl;
    }
}