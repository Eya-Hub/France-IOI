#include <iostream>
using namespace std;

int main()
{
   int age;
   cin>>age;
   
   if(age == 60) {
       cout<<0<<endl;
   } 
   else if(age>=0 && age<10) {
       cout<<5<<endl;
   }
   else {
       int poids;
       cin>>poids;
       
       if(poids >= 20) {
           cout<<40<<endl;
       } else{
           cout<<30<<endl;
       }
   }
}