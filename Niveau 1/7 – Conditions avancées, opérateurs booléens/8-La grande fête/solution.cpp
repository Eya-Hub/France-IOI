#include <iostream>
using namespace std;
int main()
{
    int dateDebut, dateFin;
    cin>>dateDebut;
    cin>>dateFin;
    
    int nbInvites;
    cin>>nbInvites;
    
    int  dateArrivee, dateDepart;
    int suspect = nbInvites;
    
    for(int i=0;i<nbInvites;i++) {
        cin>>dateArrivee;
        cin>>dateDepart;
        if(dateDebut>dateDepart || dateFin<dateArrivee) {
            suspect--;    
        }
    }
    cout<<suspect<<endl;
}