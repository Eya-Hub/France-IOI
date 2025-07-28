#include <iostream>
using namespace std;
int main()
{
    int nb;
    cin>>nb;
    int nbr;
    int count = 0;
    while(nbr!=nb) {
        cin>>nbr;
        count++;
        if(nbr<nb) {
            cout<<"c'est plus"<<endl;
        }
        if(nbr>nb) {
            cout<<"c'est moins"<<endl;    
        }
    }
    cout<<"Nombre d'essais nécessaires : "<<endl<<count<<endl;
}