#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    for(int i=0;i<(int)str.length();i++){
        cout<<str[i]<<endl;
    }
}