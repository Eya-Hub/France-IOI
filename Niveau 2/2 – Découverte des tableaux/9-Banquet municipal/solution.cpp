#include <iostream>
using namespace std;

int main()
{
    int nbTotal,nbDeplace,d1,d2,aux;
    cin>>nbTotal;
    cin>>nbDeplace;
    int tabPositions[nbTotal];
    for(int i=0;i<nbTotal;i++){
        cin>>tabPositions[i];
    }
    for(int i=0;i<nbDeplace;i++){
        cin>>d1;
        cin>>d2;
        aux = tabPositions[d1];
        tabPositions[d1] = tabPositions[d2];
        tabPositions[d2] = aux;
    }
    for(int i=0;i<nbTotal;i++){
        cout<<tabPositions[i]<<endl;
    }
}