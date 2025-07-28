#include <iostream>
using namespace std;

int main()
{
   int position;
   cin>>position;
   int nbVillage;
   cin>>nbVillage;
   int nbProche = 0;
   
   for(int i = 0;i<nbVillage;i++) {
       int positionVillage;
       cin>>positionVillage;
       int diff = position - positionVillage;
       
       if(diff < 0) {
           diff = -diff;
       }
       
       if(diff <= 50) {
           nbProche ++;
       }
   }
   
   cout<<nbProche<<endl;
}