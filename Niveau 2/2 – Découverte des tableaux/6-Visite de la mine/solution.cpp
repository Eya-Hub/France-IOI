#include <iostream>
using namespace std;

int main()
{
    int nbMouvements,mouve;
    cin>>nbMouvements;
    int tabM[nbMouvements] = {0};

    for(int i=0;i<nbMouvements;i++){
        cin>>mouve;
        tabM[i] = mouve;
    }

    for(int i=0;i<nbMouvements;i++){
        switch(tabM[i]){
            case 1 :  tabM[i] = 2;
                break;
            case 2 :  tabM[i] = 1;
                break;
            case 4 :  tabM[i] = 5;
                break;
            case 5 :  tabM[i] = 4;
                break;
            default:
                tabM[i] = 3;
        }
    }

    for(int i=nbMouvements-1;i>=0;i--){
        cout<<tabM[i]<<endl;
    }
}