#include <iostream>
using namespace std;

int main()
{
    int nbPersonnes;
    cin>>nbPersonnes;
    
    int count = 0;
    int maxPositive = 1;
    
    for(int i=0;i<(nbPersonnes*2);i++) {
        int nb;
        cin>>nb;
        
        if(nb>0) {
            count++;
        } else {
            count--;
        }
        
        if(count > maxPositive) {
            maxPositive = count;
        }
    }
    
    cout<<maxPositive<<endl;
}