#include <iostream>
using namespace std;
int main()
{
    int nbPersonnes,nbFruits;
    cin>>nbPersonnes;
    cin>>nbFruits;
    if(nbFruits % nbPersonnes == 0) {
        cout<<"oui"<<endl;
    } else{
        cout<<"non"<<endl;
    }

}
