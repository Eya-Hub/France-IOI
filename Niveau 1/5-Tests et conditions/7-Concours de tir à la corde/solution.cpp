#include <iostream>
using namespace std;

int main()
{
   int nbMembres;
   cin>>nbMembres;
   
   int sommeEquipe1 = 0;
   int sommeEquipe2 = 0;
   int index = 0;
   int diff;

   for(int i=0;i<nbMembres * 2;i++){
       index++; 
       int poids;
       cin>>poids;
       
       if(index % 2 == 1) {
           sommeEquipe1 += poids; 
       }
       
       if(index % 2 == 0) {
           sommeEquipe2 += poids; 
       }
       
   }
   
   diff = sommeEquipe1 - sommeEquipe2;
   if(diff > 0) {
       cout<<"L'équipe 1 a un avantage"<<endl;
   } else {
       cout<<"L'équipe 2 a un avantage"<<endl;
   }
   cout<<"Poids total pour l'équipe 1 : "<<sommeEquipe1<<endl;
   cout<<"Poids total pour l'équipe 2 : "<<sommeEquipe2<<endl;
}