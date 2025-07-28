#include <iostream>
using namespace std;
int main()
{
    int nbNotes;
    cin>>nbNotes;
    double total = 0;
    for(int i=0;i<nbNotes;i++){
        double note;
        cin>>note;
        total += note;
    }
    cout<<total/nbNotes<<endl;
}