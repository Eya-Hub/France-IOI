#include <iostream>
using namespace std;

int main()
{
    int dateDebut;
    int dateFin;
    cin>>dateDebut;
    cin>>dateFin;
    
    int nbEntree;
    cin>>nbEntree;
    
    int inclus = 0;
    
    for(int i=0;i<nbEntree;i++) {
        int dateEntree;
        cin>>dateEntree;
        
        if(dateEntree>=dateDebut && dateEntree<=dateFin) {
            inclus++;
        }
        
    }
    cout<<inclus<<endl;
}