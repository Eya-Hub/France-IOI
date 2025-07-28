#include <iostream>
using namespace std;
int main()
{
    int nb;
    cin>>nb;
    while(nb--){
        double poids,age,prix;
        cin>>poids;
        cin>>age;
        cin>>prix;
        cout<<prix/poids<<endl;
    }
    
}