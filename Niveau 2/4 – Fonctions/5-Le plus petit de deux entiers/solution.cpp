#include <iostream>
using namespace std;

int min2(int n1,int n2){
    if(n1<n2){
        return n1;
    }
    else{
        return n2;
    }
}


int main()
{
    int nb,mini;
    cin>>nb;
    mini =  nb;
    for(int i=0;i<9;i++){
        cin>>nb;
        mini = min2(mini,nb);
    }
    cout<<mini<<endl;

}