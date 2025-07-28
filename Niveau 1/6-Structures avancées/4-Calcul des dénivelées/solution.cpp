#include <iostream>
using namespace std;

int main()
{
   int nbMouvement;
   cin>>nbMouvement;
   int monteeTotal = 0;
   int descenteTotal = 0;
   
   for(int i = 0;i < nbMouvement;i++) {
       int mouvement;
       cin>>mouvement;
       if(mouvement<0) {
           mouvement = -mouvement;
           descenteTotal += mouvement; 
       } else{
           monteeTotal += mouvement;
       }
       
   }
   
   cout<<monteeTotal<<endl;
   cout<<descenteTotal<<endl;
}