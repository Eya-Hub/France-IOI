#include <iostream>
using namespace std;
int main()
{
    int populationActuelle;
    cin>>populationActuelle;
    double croissance;
    cin>>croissance;
    int res;
    
    res = int(populationActuelle + (populationActuelle * croissance * 0.01 ));    
     
     
    cout<<res<<endl;
}