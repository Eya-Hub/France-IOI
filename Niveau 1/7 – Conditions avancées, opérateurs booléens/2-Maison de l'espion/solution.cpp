#include <iostream>
using namespace std;

int main()
{
    int absMin;
    int absMax;
    int ordMin;
    int ordMax;
    
    cin>>absMin;
    cin>>absMax;
    cin>>ordMin;
    cin>>ordMax;
    
    int nbMaisons;
    cin>>nbMaisons;
    
    int count = 0;
    
    for(int i=0;i<nbMaisons;i++) {
        int x;
        int y;
        cin>>x;
        cin>>y;
        
        if(x>=absMin && x<=absMax && y>=ordMin && y<=ordMax) {
            count++;
        }
        
    }
    
    cout<<count<<endl;
}