#include <iostream>
using namespace std;

int main()
{
    int positionDepart;
    int largeurEmplacement;
    int nbVendeurs;
    cin>>positionDepart;
    cin>>largeurEmplacement;
    cin>>nbVendeurs;
   
    for(int i=0;i<nbVendeurs+1;i++)
    {
       cout<<positionDepart<<endl;
       positionDepart += largeurEmplacement ;
    }
}