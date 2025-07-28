#include <iostream>
using namespace std;

int main()
{
    int nbEmplacements,num;
    cin>>nbEmplacements;
    int tab[nbEmplacements];

    for (int i=0;i<nbEmplacements;i++){
        cin>>num;
        tab[num]=i;
    }

    for (int i=0;i<nbEmplacements;i++){
        cout<<tab[i]<<endl;
    }
}