#include <iostream>
using namespace std;

void verifCode(int c){
    int code;
    do{
        cout<<"Entrez le code :"<<endl;
        cin>>code;
    }while(code!=c);
}

int main()
{
    verifCode(4242);
    cout<<"Premier code bon."<<endl;
    verifCode(2121);
    cout<<"Bravo."<<endl;
}