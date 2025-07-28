#include <iostream>
#include <string>
using namespace std;

int main()
{
    string tab[12],titre,auteur;
    for(int i=0,j=1;i<11 && j<12;i +=2,j +=2){
        getline(cin,auteur);
        getline(cin,titre);
        tab[i] = titre;
        tab[j] = auteur;
    }

    for(int i=0;i<12;i++){
        cout<<tab[i]<<endl;
    }
}