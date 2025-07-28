#include <iostream>
using namespace std;

int main()
{
    int debutSoldat1, finSoldat1;
    int debutSoldat2, finSoldat2;
    
    cin>>debutSoldat1;
    cin>>finSoldat1;
    cin>>debutSoldat2;
    cin>>finSoldat2;
    
    int test =  0;
    
    for(int i=debutSoldat1;i<= finSoldat1 && test == 0;i++) {
        if(i>= debutSoldat2 && i<=finSoldat2) {
            test = 1;
        }
    }
   
    if(test == 1) {
        cout<<"Amis"<<endl;
    } else {
        cout<<"Pas amis"<<endl;
    }
}