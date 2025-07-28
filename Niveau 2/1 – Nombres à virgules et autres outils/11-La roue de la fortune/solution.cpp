#include <iostream>
using namespace std;
int main()
{
    int nb;
    cin>>nb;
    if(nb>=0){
        cout<<nb%24<<endl;
    }
    else{
       cout<<(nb%24)+24<<endl;
    }
}
