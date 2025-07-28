#include <iostream>
using namespace std;
int main()
{
    int population;
    cin>>population;
    int nbJour = 1;
    int totalMalade = 1;
    while(totalMalade<population){
        totalMalade += (totalMalade*2);
        nbJour++;
    }
    cout <<nbJour<< endl;   
}