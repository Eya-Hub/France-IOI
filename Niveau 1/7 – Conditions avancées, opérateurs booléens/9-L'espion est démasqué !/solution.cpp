#include <iostream>
using namespace std;
int main()
{
    int nbPersonnes;
    cin>>nbPersonnes;
    int taille, age, poids, cheval, cheveuxBruns;
    int count;
    for(int i=0;i<nbPersonnes;i++) {
        count = 0;
        cin>>taille;
        cin>>age;
        cin>>poids;
        cin>>cheval;
        cin>>cheveuxBruns;
        
        if(taille>=178 && taille<=182) {
            count++;
        }
        if(age>=34) {
            count++;
        }
        if(poids<70) {
            count++;
        }
        if(cheval == 0) {
            count++;
        }
        if(cheveuxBruns == 1) {
            count++;
        }
        
        if(count==5) {
            cout<<"Très probable"<<endl;
        }
        else if(count==3 || count==4) {
            cout<<"Probable"<<endl;
        }
        else if(count == 0) {
            cout<<"Impossible"<<endl;
        }
        else{
            cout<<"Peu probable"<<endl;
        }
    }
}