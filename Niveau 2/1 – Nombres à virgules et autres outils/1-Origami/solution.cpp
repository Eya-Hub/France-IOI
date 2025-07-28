#include <iostream>
using namespace std;
int main()
{
    double episseur = 0.011;
    int n = 15;
    while(n--) {
        episseur = episseur*2;
    }
    cout<<episseur<<endl;
}