#include <iostream>
using namespace std;

int main()
{
   int chmapArignon;
   int champEvaran;
   cin>>chmapArignon;
   cin>>champEvaran;
   
   int diff = chmapArignon - champEvaran;
   
   if(diff>10 or -diff>10)
   {
        if(diff<0)
        {
            cout<<"La famille Evaran a un champ trop grand"<<endl;
        }
        if(diff>0)
        {
            cout<<"La famille Arignon a un champ trop grand"<<endl;
        }
   }
}