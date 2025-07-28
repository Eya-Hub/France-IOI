#include <iostream>
using namespace std;
int main()
{
    int nbPaires;
    cin>>nbPaires;
    int  xMin1,xMax1,yMin1,yMax1;
    int  xMin2,xMax2,yMin2,yMax2;
    
    for(int i=0;i<nbPaires;i++) {
        cin>>xMin1;
        cin>>xMax1;
        cin>>yMin1;
        cin>>yMax1;
        
        cin>>xMin2;
        cin>>xMax2;
        cin>>yMin2;
        cin>>yMax2;
        
        if((xMin1 >= xMax2) || (xMin2 >= xMax1) || (yMin1 >= yMax2) || (yMin2 >= yMax1)) {
            cout<<"NON"<<endl;
        } else {
            cout<<"OUI"<<endl;
        }
    }
}