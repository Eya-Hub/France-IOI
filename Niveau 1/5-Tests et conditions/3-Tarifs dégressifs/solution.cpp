#include <iostream>
using namespace std;

int main()
{
   int heure;
   cin>>heure;
   
   int prix = 10;
   
   if(heure>=1 and heure<=12)
   {
        for(int i=0;i<heure;i++)
       {
          prix = prix + 5; 
       }
       
       if(prix>53)
       {
          cout<<53<<endl; 
       }
       
       if(prix<=53)
       {
           cout<<prix<<endl;
       }
          
   }
   
   if(heure == 0){
        cout<<prix<<endl;
   }
}