#include <iostream>
using namespace std;

int main()
{
    int index;
    int count = 0;

    for(int i=0;i<20;i++){
        count++;
        index = 0;
    for(int j=0;j<20;j++)
    {
        index += count;
        cout <<index<<" ";
    }
        cout <<""<<endl;
    }
   
}