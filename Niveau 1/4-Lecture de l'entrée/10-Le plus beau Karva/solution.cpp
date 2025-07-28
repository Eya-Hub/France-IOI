#include <iostream>
using namespace std;

int main()
{
    int nbKarvas;
    cin >> nbKarvas;
    
    for(int i=0;i<nbKarvas;i++)
    {
        int poids;
        int age;
        int longueurCornes;
        int hauteurGarrot;
        cin>>poids;
        cin>>age;
        cin>>longueurCornes;
        cin>>hauteurGarrot;
        cout<<(longueurCornes * hauteurGarrot) + poids<<endl;
    }
}