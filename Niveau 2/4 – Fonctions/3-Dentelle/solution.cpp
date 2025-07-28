#include <iostream>
using namespace std;

void dentelle(int len,char car){
    for(int i=0;i<len;i++){
        cout<<car;
    }
    cout<<endl;
}

int main()
{
    int longueur;
    cin>>longueur;
    dentelle(longueur,'X');
    dentelle(longueur,'#');
    dentelle(longueur,'i');
}