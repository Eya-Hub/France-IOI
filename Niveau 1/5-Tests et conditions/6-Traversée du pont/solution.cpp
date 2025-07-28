#include <iostream>
using namespace std;

int main()
{
   int dee1;
   int dee2;
   cin>>dee1;
   cin>>dee2;
   
   int somme = dee1 + dee2;
   
   if(dee1 > 0 && dee2 <= 6 ) {
       if(somme>= 10) {
       cout <<"Taxe spéciale !"<< endl;
       cout <<36<< endl;
        } else {
            cout<<"Taxe régulière"<<endl;
            cout<<somme * 2<<endl;
        }
   }
       
}