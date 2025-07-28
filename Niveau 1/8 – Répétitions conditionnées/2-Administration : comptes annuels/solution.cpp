#include <iostream>
using namespace std;
int main()
{
    int nb;
    int somme = 0;
    while(nb!=-1) {
        cin>>nb;
        if(nb!=-1) {
           somme += nb; 
        }
    }
    cout<<somme<<endl;
}