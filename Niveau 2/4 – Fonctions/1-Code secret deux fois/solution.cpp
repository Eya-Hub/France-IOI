#include <iostream>
using namespace std;

void verifCode(){
    int code;
    do{
        cout<<"Entrez le code :"<<endl;
        cin>>code;
    }while(code!=4242);

}
int main()
{
    verifCode();
    cout<<"Encore une fois."<<endl;
    verifCode();
    cout<<"Bravo."<<endl;
}