#include <iostream>
using namespace std;

int retournerTerme(int n){
    if(n%2==0){
        return n/2;
    }
    else{
        return n*3 + 1;
    }
}


int main()
{
    int nb;
    cin>>nb;
    do{
        nb = retournerTerme(nb);
        cout<<nb<<" ";
    }while(nb != 1);
}