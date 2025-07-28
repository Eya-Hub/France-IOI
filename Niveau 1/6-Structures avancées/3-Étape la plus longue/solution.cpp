#include <iostream>
using namespace std;

int main()
{
   int nbJours;
   cin>>nbJours;
   int maxDistance = 0;
   
   for(int i = 0;i < nbJours;i++) {
       int distance;
       cin>>distance;
       if(distance > maxDistance) {
           maxDistance = distance;
       }
   }
   
   cout<<maxDistance<<endl;
}