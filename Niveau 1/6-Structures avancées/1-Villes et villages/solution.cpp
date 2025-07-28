#include <iostream>
using namespace std;

int main()
{
   int nbLieu;
   cin>>nbLieu;
   int nbVille = 0;
   
   for(int i = 0;i<nbLieu;i++) {
       int nbHabitant;
       cin>>nbHabitant;
       
       if(nbHabitant>10000) {
           nbVille++;
       }
   }
   cout<<nbVille<<endl;
}