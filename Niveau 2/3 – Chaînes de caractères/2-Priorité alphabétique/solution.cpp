#include <iostream>
using namespace std;

int main()
{
    string premierNom, secondNom;
    cin>>premierNom;
    cin>>secondNom;
    
    if(premierNom < secondNom){
        cout<<premierNom<<endl;
    }
    else if(secondNom < premierNom){
        cout<<secondNom<<endl;
    }
}