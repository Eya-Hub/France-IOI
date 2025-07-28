#include <iostream>
using namespace std;
int main()
{
    int nbMax;
    cin>>nbMax;
    int count = 0;
    int nbPierres = 0;
    while(nbPierres<nbMax) {
        count++;
        nbPierres += (count*count);
    }
    
    if(nbPierres>nbMax){
            nbPierres -= (count*count);
            count--;
    }
    
    cout<<count<<endl;
    cout<<nbPierres<<endl;
}