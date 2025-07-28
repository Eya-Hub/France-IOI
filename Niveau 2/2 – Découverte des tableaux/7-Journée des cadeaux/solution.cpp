#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int nbHabitants,val1,val2;
    cin>>nbHabitants;
    int tabFortunes[nbHabitants];

    for(int i=0;i<nbHabitants;i++){
        cin>>tabFortunes[i];
    }
    sort(tabFortunes, tabFortunes + nbHabitants);
    if(nbHabitants%2==0){
        val1 = tabFortunes[nbHabitants/2];
        val2 = tabFortunes[nbHabitants/2 - 1];
        cout<<(val1+val2)/2.0<<endl;
    }
    else{
        val1 = tabFortunes[nbHabitants/2];
        cout<<val1<<endl;
    }
}