#include <iostream>
using namespace std;
int main()
{
   int poids;
   int nbr;
   cin>>poids;
   cin>>nbr;
   
   if((poids * nbr) > 105)
   {
       cout<<"Surcharge !"<<endl;
   }
}