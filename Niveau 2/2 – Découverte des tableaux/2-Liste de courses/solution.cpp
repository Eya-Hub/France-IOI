#include <iostream>
using namespace std;

int main()
{
    int listePrix[10] =  {9, 5, 12, 15, 7, 42, 13, 10, 1, 20};
    int kg, somme = 0;
    for(int i=0;i<10;i++){
        cin>>kg;
        somme += kg * listePrix[i];
    }
    cout<<somme<<endl;
}
