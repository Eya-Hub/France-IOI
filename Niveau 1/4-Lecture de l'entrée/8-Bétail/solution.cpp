#include <iostream>
using namespace std;

int main()
{
    int total =  0;
    for(int i=0;i<20;i++)
    {
        int nbr;
        cin>>nbr;
        total += nbr;
    }
    
    cout <<total<<endl;
}