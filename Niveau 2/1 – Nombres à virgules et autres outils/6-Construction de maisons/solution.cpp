#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double cimentNes;
    cin>>cimentNes;
    int nbSachet = ceil(cimentNes / 60);
    cout<<nbSachet * 45<<endl;
}