#include <iostream>
using namespace std;

int main()
{
    int mois;
    cin>>mois;
    
    

    if((mois>=1 && mois<=3) || (mois>=7 && mois<=9)) {
        cout<<30<<endl;
    }
        
    else if((mois>=4 && mois<=6) || mois==10) {
        cout<<31<<endl;
    }
        
    else {
        cout<<29<<endl;
    }
    
}