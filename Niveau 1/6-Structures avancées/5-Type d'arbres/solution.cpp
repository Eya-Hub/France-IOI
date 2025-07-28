#include <iostream>
using namespace std;

int main()
{
   int hauteur;
   int folioles;
   cin>>hauteur;
   cin>>folioles;
   
   if(hauteur <= 5 && folioles >= 8) {
       cout<<"Tinuviel"<<endl;
   }
   
   if(hauteur >= 10 && folioles >= 10) {
       cout<<"Calaelen"<<endl;
   }
   
   if(hauteur <= 8 && folioles <= 5) {
       cout<<"Falarion"<<endl;
   }
   
   if(hauteur >= 12 && folioles <= 7) {
       cout<<"Dorthonion"<<endl;
   }
}