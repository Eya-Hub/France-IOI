#include <iostream>
using namespace std;

int main()
{
    int nbOperations,index,quantite;
    cin>>nbOperations;
    int stock[10] = {0};

    while(nbOperations--){
        cin>>index;
        cin>>quantite;
        stock[index-1] += quantite;
    }

    for(int i=0;i<10;i++){
        cout<<stock[i]<<endl;
    }
}
