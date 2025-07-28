#include <iostream>
using namespace std;
int main()
{
    int nbRecherche;
    cin>>nbRecherche;
    int tailleListe;
    cin>>tailleListe;
    bool test = false;
    int i = 0;
    int num;
    while(test == false && i<tailleListe) {
        cin>>num;
        if(num == nbRecherche) {
            test = true;
        }
        i++;
    }
    
    if(test == true) {
        cout<<"Sorti de la ville"<<endl;
    } else{
        cout<<"Encore dans la ville"<<endl;
    }
    
}