#include <iostream>
#include <string>
using namespace std;

int main()
{
    string j1,j2;
    getline(cin,j1);
    getline(cin,j2);
    int egalite = 0,i = 0,winner;
    bool test = false;

    while(test == false && i<(int)j1.length() && i<(int)j2.length()){
        if(j1[i]!=j2[i]){
            test = true;
            if(j1[i]<j2[i]){
                winner = 1;
            }
            else{
                winner = 2;
            }
            break;
        }
        egalite++;
        i++;
    }

    if(test == false){
         if((int)j1.length()<(int)j2.length()){
            cout<<2<<endl;
            cout<<egalite<<endl;
        }
        else if((int)j2.length()<(int)j1.length()){
            cout<<1<<endl;
            cout<<egalite<<endl;
        }
        else{
            cout<<"="<<endl;
            cout<<egalite<<endl;
        }
    }
    else{
        cout<<winner<<endl;
        cout<<egalite<<endl;
    }

}