#include <iostream>
using namespace std;

int main()
{
    string nom;
    cin>>nom;
    if(nom[0]>='A'&&nom[0]<='F'){
        cout<<1<<endl;
    }
    else if(nom[0]>='G'&&nom[0]<='P'){
        cout<<2<<endl;
    }
    else if(nom[0]>='Q'&&nom[0]<='Z'){
        cout<<3<<endl;
    }
}